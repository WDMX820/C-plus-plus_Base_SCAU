//第二阶段：通讯录管理系统

/*
通讯录是一个可以记录亲人、好友信息的工具。
本教程主要利用C++来实现一个通讯录管理系统

系统中需要实现的功能如下:
1、添加联系人：向通讯录中添加新人，信息包括(姓名、性别、年龄、联系电话、家庭住址)最多记录1000人
添加联系人实现步骤:
  1.1 设计联系人结构体
  1.2 设计通讯录结构体
  1.3 main函数中创建通讯录
  1.4 封装添加联系人函数
  1.5 测试添加联系人功能

2、显示联系人：显示通讯录中所有联系人信息
显示联系人实现步骤:
  2.1 封装显示联系人函数
  2.2 测试显示联系人功能

3、删除联系人：按照姓名进行删除指定联系人
删除联系人实现步骤:
  3.1 封装检测联系人是否存在
  3.2 封装删除联系人函数
  3.3 测试删除联系人功能

4、查找联系人：按照姓名查看指定联系人信息
查找联系人实现步骤:
  4.1 封装查找联系人函数
  4.2 测试查找指定联系人

5、修改联系人：按照姓名重新修改指定联系人
修改联系人实现步骤:
  5.1 封装修改联系人函数
  5.2 测试修改联系人功能

6、清空联系人：清空通讯录中所有信息
清空联系人实现步骤
  6.1 封装清空联系人函数
  6.2 测试清空联系人

7、退出通讯录：退出当前使用的通讯录
*/


//Task1 - 菜单功能
// 
//-封装函数显示该界面 如 void showMenu()
//-在main函数中调用封装好的函数

//注意事项：把结构体作为参数传递进函数，如果是值传递操作符是"."，如果是地址传递操作符是"->"

#include<iostream>
using namespace std;
#include<string>
#include "System1.h"
#define MAX 1000   //定义宏常量，方便后续修改

// 设计联系人结构体
struct person
{
	string m_name;     //姓名 - m_name的m是指成员变量
	int m_sex;         //性别  1 男  2 女
	int m_age;           //年龄
	string m_phone;    //电话
	string m_address;  //地址
};

// 设计通讯录结构体
struct addressbooks
{
	//通讯录中保存的联系人数组
	struct person personarray[MAX];

	//通讯录中当前记录联系人个数
	int m_size;
};


// 0 - 菜单界面 - showMenu函数
void showMenu()
{
	cout << "*****************************" << endl;
	cout << "******  1、添加联系人  ******" << endl;
	cout << "******  2、显示联系人  ******" << endl;
	cout << "******  3、删除联系人  ******" << endl;
	cout << "******  4、查找联系人  ******" << endl;
	cout << "******  5、修改联系人  ******" << endl;
	cout << "******  6、清空联系人  ******" << endl;
	cout << "******  0、退出通讯录  ******" << endl;
	cout << "*****************************" << endl;
}


// 1 - 添加联系人函数
void addperson(addressbooks* abs)  //用地址传递，传进来的是abs的地址，可以修改主函数的实参
{
	//判断通讯录是否已满，如果满了就不再添加
	if (abs->m_size == MAX)  //参数中的项用"."，地址中的项用"->"，即"->"是通过结构体指针访问结构体中的属性
	{
		cout << "通讯录已满，已无法添加！" << endl;
		return;
	}
	else
	{
		cout << "提示：若不按照提示胡乱输入数据，可能会导致死循环，请谨慎输入！" << endl;
		//添加具体联系人
		//1、姓名
		string name;   //定义用于添加联系人姓名的形参name
		cout << "请输入姓名：";
		cin >> name;
		//★★★ abs->personarray：指abs这个具体通讯录变量中的成员变量personarray
		//★★★ abs->m_size是指第几个联系人(从0开始)，".m_name"是取出对应person的名字并最后赋值
		abs->personarray[abs->m_size].m_name = name;  //见前2行注释

		//2、性别
		int sex = 0;   //定义用于添加联系人性别的形参sex
		cout << "请输入性别（1:男|2:女）：";
		while (true)
		{
			//如果输入的是 1 或者 2 可以退出循环，因为输入的是正确值
			//如果输入有误，请重新输入
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personarray[abs->m_size].m_sex = sex;  //见前面类似解释
				break;
			}
			else
			{
				cout << "请输入1(男)或者2(女)，此处不接受其他性别！" << endl;
			}
		}

		//3、年龄
		int age = 0;
		cout << "请输入年龄：";
		while (true)
		{
			//如果输入的是 0 或者 150 可以退出循环，因为输入的是正确值
			//如果输入有误，请重新输入
			cin >> age;
			if (age <= 150 || age >= 0)
			{
				abs->personarray[abs->m_size].m_age = age;  //见前面类似解释
				break;
			}
			else
			{
				cout << "请输入0-150，你是地球人不是外星人！" << endl;
			}
		}

		//4、电话
		cout << "请输入联系电话：";
		string phone;
		cin >> phone;
		abs->personarray[abs->m_size].m_phone = phone;

		//5、地址
		cout << "请输入家庭住址：";
		string address;
		cin >> address;
		abs->personarray[abs->m_size].m_address = address;

		//6、通知操作者添加成功
		cout << "添加联系人" << abs->personarray[abs->m_size].m_name << "成功！" << endl;

		//7、更新通讯录人数
		abs->m_size++;

		//8、清屏操作（按任意键之后清屏）
		system("pause");  //请按任意键继续
		system("cls");    //★★★启动清屏操作★★★
	}
}


// 2 - 显示所有联系人 - showperson函数
void showperson(addressbooks* abs)
{
	//判断通讯录中人数是否为0，如果为0，提示记录为空
	//如果不为0，显示记录的联系人信息
	if (abs->m_size == 0)
	{
		cout << "当前记录为空！" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_size; i++)
		{
			cout << "第" << i + 1 << "个联系人的信息如下：" << endl;
			cout << "姓名：" << abs->personarray[i].m_name << "\t";
			// 性别 使用三目运算符，如果是1就输出男，不是1就输出女
			cout << "性别：" << (abs->personarray[i].m_sex == 1 ? "男" : "女") << "\t";
			cout << "年龄：" << abs->personarray[i].m_age << "\t";
			cout << "电话：" << abs->personarray[i].m_phone << "\t";
			cout << "地址：" << abs->personarray[i].m_address << endl;
		}
	}
	system("pause");  //请按任意键继续
	system("cls");    //★★★启动清屏操作★★★
}


//检测联系人是否存在，如果存在，返回联系人所在数组中的具体位置，不存在返回-1
//参数1 通讯录    参数2 对比姓名
int isexist(addressbooks* abs, string name)
{
	for (int i = 0; i < abs->m_size; i++)
	{
		//找到用户输入的姓名了
		if (abs->personarray[i].m_name == name)
		{
			return i;   //找到了，返回这个人在数组中的下标编号
		}
	}
	return -1;  //如果遍历结束都没有找到，返回-1
}


// 3 - 删除指定联系人 - deleteperson函数
void deleteperson(addressbooks* abs)
{
	cout << "请输入您要删除的联系人：";

	string name;
	cin >> name;

	// ret == -1 未查到
	// ret != -1 查到了 而且返回的是联系人在数组中的下标编号
	int ret = isexist(abs, name);
	if (ret != -1)
	{
		//查找到人，要进行删除操作
		for (int i = ret; i < abs->m_size; i++)
		{
			//数据前移(数据前移覆盖)
			abs->personarray[i] = abs->personarray[i + 1];
		}
		abs->m_size--;  //更新通讯录中的人员数
		cout << "删除成功" << endl;
	}
	else
	{
		cout << "查无此人！" << endl;
	}
	system("pause");  //请按任意键继续
	system("cls");    //★★★启动清屏操作★★★
}


// 4 - 查找指定联系人 - findperson函数
void findperson(addressbooks* abs)
{
	cout << "请输入您要查找的联系人：";
	string name;
	cin >> name;

	//判断指定的联系人是否存在通讯录中
	int ret = isexist(abs, name);
	if (ret != -1)  //找到联系人
	{
		cout << "姓名：" << abs->personarray[ret].m_name << "\t";
		cout << "性别：" << (abs->personarray[ret].m_sex == 1 ? "男" : "女") << "\t";
		cout << "年龄：" << abs->personarray[ret].m_age << "\t";
		cout << "电话：" << abs->personarray[ret].m_phone << "\t";
		cout << "地址：" << abs->personarray[ret].m_address << endl;
	}
	else
	{
		cout << "查无此人！" << endl;
	}
	system("pause");  //请按任意键继续
	system("cls");    //★★★启动清屏操作★★★
}


// 5 - 修改指定联系人 - modifyperson函数
void modifyperson(addressbooks* abs)
{
	cout << "请输入您要修改的联系人：";
	string name;
	cin >> name;
	cout << "您要修改的联系人是：" << name << endl;
	int ret = isexist(abs, name);

	if (ret != -1)  //找到指定联系人
	{
		int selectnum = 1;
		while (selectnum == 1 || selectnum == 2 || selectnum == 3 || selectnum == 4 || selectnum == 5)  //一直循环，直到selectnum等于0才会退出系统
		{
			cout << "修改名字请按 1 |修改性别请按 2 |修改年龄请按 3 |修改电话请按 4 |修改地址请按 5 |退出修改请按 0" << endl;
			cin >> selectnum;

			switch (selectnum)  //选择系统的功能
			{
			case 1:  //1、修改名字
			{
				string name;
				cout << "请输入新的姓名：";
				cin >> name;
				abs->personarray[ret].m_name = name;
				break;
			}
			case 2:  //2、修改性别
			{
				int sex = 0;
				cout << "请输入新的性别（1:男|2:女）：";

				while (true)
				{
					cin >> sex;
					if (sex == 1 || sex == 2)
					{
						//输入正确  退出循环输入
						abs->personarray[ret].m_sex = sex;
						break;
					}
					cout << "输入有误，请重新输入！" << endl;
				}
				break;
			}
			case 3:  //3、修改年龄
			{
				int age = 0;
				cout << "请输入新的年龄：";
				while (true)
				{
					//如果输入的是 0 或者 150 可以退出循环，因为输入的是正确值
					//如果输入有误，请重新输入
					cin >> age;
					if (age <= 150 || age >= 0)
					{
						abs->personarray[ret].m_age = age;
						break;
					}
					else
					{
						cout << "请输入0-150，你是地球人不是外星人！" << endl;
					}
				}
				break;
			}
			case 4:  //4、修改电话
			{
				cout << "请输入新的联系电话：";
				string phone;
				cin >> phone;
				abs->personarray[ret].m_phone = phone;
				break;
			}
			case 5:  //5、修改地址
			{
				cout << "请输入新的家庭住址：";
				string address;
				cin >> address;
				abs->personarray[ret].m_address = address;
				break;
			}
			case 0:  //6、selectnum变为0，跳出while循环
			{
				break;
			}
			}
		}
		cout << "修改联系人" << abs->personarray[ret].m_name << "成功！" << endl;
	}
	else
	{
		cout << "很抱歉，查无此人！" << endl;
	}
	//7、清屏操作（按任意键之后清屏）
	system("pause");  //请按任意键继续
	system("cls");    //★★★启动清屏操作★★★
}


// 6 - 清空联系人 - cleanperson函数
void cleanperson(addressbooks* abs) 
{
	cout << "请问真的要清空所有联系人吗？此操作无法挽回！" << endl;
	cout << "若执意清空所有联系人请按 1 ，放弃清空请按 2 " << endl;
	int selectnumber;
	cin >> selectnumber;
	if (selectnumber == 1)
	{
		abs->m_size = 0; //将当期记录联系人数量置为0，做逻辑清空操作
		cout << "通讯录已清空" << endl;
	}
	else
	{
		cout << "通讯录保持不变" << endl;
	}
	system("pause");  //请按任意键继续
	system("cls");    //★★★启动清屏操作★★★
}



//主函数
int main()
{
	//创建通讯录结构体变量
	addressbooks abs;
	
	//初始化通讯录中当前人员个数
	abs.m_size = 0;

	int select = 0;  //创建用户选择输入的变量

	while (true)  //一直循环，直到出现 0 才会退出系统
	{

		//菜单调用
		showMenu();

		cin >> select;

		switch (select)  //选择系统的功能
		{
		case 1:  //1、添加联系人
			addperson(&abs);   //不加"&"的话是值传递，不能修改abs的数据，要用地址传递修改实参
			break;
		case 2:  //2、显示联系人
			showperson(&abs);
			break;
		case 3:  //3、删除联系人
			//case语句中如果代码过多，要封装成代码段，使用{}即可 ★★★★
		{
			/*cout << "请输入一个删除的联系人姓名：";
			string name;
			cin >> name;
			if (isexist(&abs, name) == -1)
			{
				cout << "查无此人！" << endl;
			}
			else
			{
				cout << "找到此人！" << endl;
			}*/
			deleteperson(&abs);
			break;
		}
		case 4:  //4、查找联系人
			findperson(&abs);
			break;
		case 5:  //5、修改联系人
			modifyperson(&abs);
			break;
		case 6:  //6、清空联系人
			cleanperson(&abs);
			break;
		case 0:  //7、退出通讯录
			cout << "欢迎下次使用！" << endl;
			system("pause");  //请按任意键继续
			return 0;  //用于退出while循环
			break;
		}
	}

	system("pause");
	return 0;

}