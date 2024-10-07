## C++课程小作业

```c++
//代码实现
#include <iostream>
#include <string.h>
using namespace std;

class Student
{
public:
    Student();
    float sum();        //定义求三门课总成绩的函数sum
    float average();    //定义求三门课平均成绩的函数average
    void print();       //定义显示学生数据信息的函数print
    int get_reg_num();  //定义获取学生注册号的函数get_reg_num
    void set_stu_inf(int x, char* na, float s, float y, float j);
    //定义设置学生数据信息的函数set_stu_inf
private:
    int regno;        //注册号
    char name[10];    //姓名
    float math;       //数学成绩
    float english;    //英语成绩
    float computer;   //计算机成绩
};

Student::Student()
{
    regno = 0;
    strset(name, 0);
    math = 0;
    english = 0;
    computer = 0;    //定义初始值为0
}
float Student::sum()
{
    return math + english + computer;   //三门课求和为总成绩
}
float Student::average()
{
    return sum() / 3.0;       //三门课求和后取平均值为平均成绩
}

void Student::print()
{
    cout << "注册号:" << regno << endl;
    cout << "姓名:" << name << endl;
    cout << "数学成绩:" << math << endl;
    cout << "英语成绩:" << english << endl;
    cout << "计算机成绩:" << computer << endl;
}

int Student::get_reg_num()
{
    return regno;
}

void Student::set_stu_inf(int no, char* na, float ma, float en, float j)
{
    regno = no;
    strncpy(name, na, 10);
    math = ma;
    english = en;
    computer = j;
}

int main()
{
    Student st[10];
    float total[10]; //总分
    float maxSum = 0, totalSum = 0; //初始值最高分和总成绩
    int no; //注册号
    int n;
    int i;
    cout << "请输入学生个数：";
    cin >> n;              //键盘输入学生个数n
    for (i = 0; i < n; ++i)    //此处循环次数n为录入学生个数
    {
        char na[10];
        float ma, en, j;
        cout << "请输入学生" << i + 1 << "的信息:" << endl;
        cout << "注册号:";
        cin >> no;
        cout << "姓名:";
        cin >> na;
        cout << "数学:";
        cin >> ma;
        cout << "外语:";
        cin >> en;
        cout << "计算机:";
        cin >> j;
        st[i].set_stu_inf(no, na, ma, en, j);
    }
    cout << "------------------------------------------------------------------------------------------------------------------------"<<endl;
    for (i = 0; i < n; ++i)
    {
        cout << "学生" << i + 1 << "总成绩为:" << st[i].sum() << " 平均成绩为:" << st[i].average() << endl;
        total[i] = st[i].sum();
        maxSum = maxSum > total[i] ? maxSum : total[i];
        totalSum += total[i];
    }
    cout << "全班学生总成绩最高分:" << maxSum << endl;
    cout << "全班学生总平均分:" << totalSum / n << endl;
    cout << "------------------------------------------------------------------------------------------------------------------------"<<endl;
    cout << "请输入一个注册号:";
    cin >> no;
    for (i = 0; i < n; ++i)
    {
        if (st[i].get_reg_num() == no)
        {
            cout << "该生的全部数据信息如下:" << endl;
            st[i].print();
            break;
        }
    }
}
```

运行截图：

<img src="C:\Users\WDMX\AppData\Roaming\Typora\typora-user-images\image-20241007173913940.png" alt="image-20241007173913940" style="zoom:67%;" />                

 <img src="C:\Users\WDMX\AppData\Roaming\Typora\typora-user-images\image-20241007173922628.png" alt="image-20241007173922628" style="zoom:67%;" />