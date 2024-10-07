//第一阶段：入门学习阶段

//选中批量取消注释：Control + K + U
//选中批量注释：Control + K + C

//Task 1：注释和变量的意义
/*
#include<iostream>
using namespace std;

// 1、单行注释(绿色注释)

// 2、多行注释

//main是一个程序的入口
//每个程序都必须有这么一个函数
//有且仅有一个★

int main()
{
	//输出Hello World
	//cout << "Hello World" << endl;
	//cout << "Hello C++" << endl;

	//变量创建的语法：数据类型 变量名 = 变量初始值
	//int a = 10;
	//cout << "a = " << a << endl;

	system("pause");

	return 0;
}
*/




//Task 2：常量的使用
/*
#include<iostream>
using namespace std;

//常量的定义方式
//1、#define 宏常量
//2、const修饰的变量

//1、#define 宏常量
#define Day 7

int main()
{

	//Day = 14; //错误，Day是宏常量，一旦修改就会报错
	cout << "一周总共有：" << Day << "天" << endl;

	//2、const修饰的变量
	const int month = 12;
	//month = 24; //错误，const修饰的变量也成为常量

	cout << "一年总共有：" << month << "个月" << endl;

	system("pause");

	return 0;
}
*/




//Task 3：关键字
/*
#include<iostream>
using namespace std;

int main()
{
	//创建变量：数据类型 变量名称 = 变量初始值
	//不要用关键字给变量或者常量起名称
	//int int = 10;   错误，第二个int是关键字，不可以作为变量的名称

	system("pause");
	return 0;
}
*/




//Task 4：标识符命名规则
/*
#include<iostream>
using namespace std;

//标识符命名规则
//1、标识符不可以是关键字
//2、标识符是由字母、数字、下划线构成
//3、标识符第一个字符只能是字母或下划线
//4、标识符是区分大小写的


int main()
{
	//1、标识符不可以是关键字
	//int int = 10;

	//2、标识符是由字母、数字、下划线构成
	int abc = 10;
	int _abc = 20;
	int _123abc = 30;

	//3、标识符第一个字符只能是字母或下划线
	//int 123abc = 40;

	//4、标识符区分大小写
	int aaa = 100;
	cout << aaa << endl;
	//cout << AAA << endl;  //AAA和aaa不是同一个名称

	//建议：给变量起名的时候，最好能够做到见名知意，方便自己和他人去阅读(代码的可读性)
	int num1 = 10;
	int num2 = 20;
	int sum = num1 + num2;
	cout << sum << endl;

	system("pause");
	return 0;
}
*/




//Task 5：数据类型-整型
/*
#include<iostream>
using namespace std;

int main()
{
	//整型（区别在于所占内存空间不同）
	//1、短整型 2字节 (-32768 ~ 32767)
	short num1 = 32768;  //num1超过32767，则重新从-32768开始

	//2、整型 4字节 (-2^31 ~ 2^31-1)
	int num2 = 10;

	//3、长整型 4字节 (-2^31 ~ 2^31-1)
	long num3 = 10;

	//4、长长整型 8字节 (-2^63 ~ 2^63-1)
	long long num4 = 10;

	cout << "num1=" << num1 << endl;
	cout << "num2=" << num2 << endl;
	cout << "num3=" << num3 << endl;
	cout << "num4=" << num4 << endl;

	system("pause");
	return 0;
}
*/




//Task 6：数据类型-sizeof关键字
/*
#include<iostream>
using namespace std;

int main()
{
	//整型：short（2）    int（4）    long（4）    long long（8）
	//可以利用sizeof求出数据类型占用内存大小（字节）
	//语法：sizeof（数据类型/变量）

	short num1 = 10;
	cout << "short占用内存空间为：" << sizeof(short) << endl;
	cout << "short占用内存空间为：" << sizeof(num1) << endl;

	int num2 = 10;
	cout << "int占用内存空间为：" << sizeof(int) << endl;
	cout << "int占用内存空间为：" << sizeof(num2) << endl;

	long num3 = 10;
	cout << "long占用内存空间为：" << sizeof(long) << endl;
	cout << "long占用内存空间为：" << sizeof(num3) << endl;

	long long num4 = 10;
	cout << "long long占用内存空间为：" << sizeof(long long) << endl;
	cout << "long long占用内存空间为：" << sizeof(num4) << endl;

	//整型大小比较
	//short < int <= long <= long long

	system("pause");
	return 0;
}
*/




// Task 7：数据类型-实型
/*
#include<iostream>
using namespace std;

int main()
{

	//1、单精度  float
	//2、双精度  double
	//默认情况下 输出一个小数，会显示出6位有效数字
	float f1 = 3.1415926f; //不加 f 则默认为double双精度
	cout << "f1 = " << f1 << endl;

	float d1 = 3.1415926; //不加 f 则默认为double双精度
	cout << "d1 = " << d1 << endl;

	//统计float和double占用内存空间
	cout << "float 占用内存空间为：" << sizeof(float) << endl;    // 4字节
	cout << "double 占用内存空间为：" << sizeof(double) << endl;  // 8字节

	//科学计数法
	float f2 = 3e2; //3 * 10 ^ 2 = 300
	cout << "f2=" << f2 << endl;

	float f3 = 3e-2; //3 * 0.1 ^ 2 = 0.03
	cout << "f3=" << f3 << endl;

	system("pause");
	return 0;
}
*/




// Task 8：数据类型-字符型
/*
#include<iostream>
using namespace std;

int main()
{
	//1、字符型变量的创建方式
	char ch = 'a';
	char ch1 = 'A';
	cout << ch << endl;
	cout << ch1 << endl;

	//2、字符型变量所占内存大小
	cout << "char字符型变量所占内存：" << sizeof(char) << endl;

	//3、字符型变量常见错误
	//char ch2 = "b"; // 创建字符型变量时候，要用单引号
	//char ch2 = 'abcdef'; // 创建字符型变量时候，单引号内只能有一个字符

	//4、字符型变量对应ASCII编码
	// a - 97  ▲
	// A - 65  ▲
	cout << (int)ch << endl;
	cout << (int)ch1 << endl;

	system("pause");
	return 0;
}
*/




// Task 9：数据类型-转义字符
/*
#include<iostream>
using namespace std;

int main()
{
	//转义字符

	//换行符 \n

	cout << "Hello Wolrd" << endl;
	cout << "Hello Wolrd\n";

	//反斜杠 \\

	cout << "\\" << endl;

	//水平制表符 \t   作用可以整齐输出数据

	cout << "aaaa\tHello World" << endl;
	cout << "aa\tHello World" << endl;
	cout << "aaaaaa\tHello World" << endl;

	system("pause");
	return 0;
}
*/




// Task 10：数据类型-字符串类型
/*
#include<iostream>
using namespace std;
#include<string>  //用C++风格字符串的时候，要包含这个头文件

int main()
{
	//1、C风格字符串
	//注意事项1：char 字符串名 []
	//注意事项2：等号后面 要用双引号 包含起来字符串
	char str[] = "Hello World";
	cout << str << endl;
	cout << "Hello World" << endl;

	//2、C++风格字符串
	//注意事项：包含一个头文件  #include<string>
	string str2 = "Hello World";
	cout << str2 << endl;

	system("pause");
	return 0;
}
*/




// Task 11：数据类型-布尔类型
/*
#include<iostream>
using namespace std;

int main()
{
	//1、创建bool数据类型
	bool flag = true; //true是真
	cout << flag << endl;

	flag = false; //false是假
	cout << flag << endl;

	//本质上  1代表真  0代表假（其实非0都代表真）

	//2、查看bool类型所占内存空间（bool类型占1个字节大小）
	cout << "bool类型所占内存空间：" << sizeof(bool) << endl;

	system("pause");
	return 0;
}
*/




// Task 12：数据类型-数据的输入
/*
#include<iostream>
using namespace std;
#include<string> // string头文件

int main()
{
	//1、整型
	int a = 0;
	cout << "请给整型变量a赋值：" << endl;
	cin >> a;
	cout << "整型变量a = " << a << endl;

	//2、浮点型
	float f = 3.14f;
	cout << "请给浮点型变量f赋值：" << endl;
	cin >> f;
	cout << "浮点型变量a = " << f << endl;

	//3、字符型
	char ch = 'a';
	cout << "请给字符型变量ch赋值：" << endl;
	cin >> ch;
	cout << "字符型变量ch = " << ch << endl;

	//4、字符串型
	string str = "hello";
	cout << "请给字符串str赋值" << endl;
	cin >> str;
	cout << "字符串str = " << str <<endl;

	//5、布尔类型
	bool flag = false;
	cout << "请给布尔类型flag赋值" << flag << endl;
	cin >> flag;  //bool类型 只要是非0的值都为真
	cout << "布尔类型flag = " << flag << endl;

	system("pause");
	return 0;
}
*/




// Task 13：数据类型-运算符
/*
#include<iostream>
using namespace std;

int main()
{
	//加减乘除
	int a1 = 10;
	int b1 = 3;

	cout << a1 + b1 << endl;
	cout << a1 - b1 << endl;
	cout << a1 * b1 << endl;
	cout << a1 / b1 << endl; //两个整数相除 结果依然是整数，将小数部分去除

	int a2 = 10;
	int b2 = 20;

	cout << a2 / b2 << endl;

	int a3 = 10;
	int b3 = 0;

	//cout << a3 / b3 << endl;  // 错误！两个数相除，除数是不可以为0的

	//两个小数可以相除
	double d1 = 0.5;
	double d2 = 0.22;
	cout << d1 / d2 << endl;  //运算的结果也可以是小数

	system("pause");
	return 0;
}
*/




// Task 14：数据类型-算术运算符1
/*
#include<iostream>
using namespace std;

int main()
{
	//取模运算本质  就是求余数（只有整型变量可以取模运算▲）
	int a1 = 10;
	int b1 = 3;

	cout << a1 % b1 << endl;

	int a2 = 10;
	int b2 = 20;

	cout << a2 % b2 << endl;

	int a3 = 10;
	int b3 = 0;
	// 错误！两个数相除，除数是不可以为0的，所以也做不了取模运算
	//cout << a3 % b3 << endl;

	//两个小数是不可以做取模运算的
	double d1 = 3.14;
	double d2 = 1.1;

	//cout << d1 % d2 << endl;

	system("pause");
	return 0;
}
*/




// Task 15：数据类型-算术运算符2
/*
#include<iostream>
using namespace std;

int main()
{
	//1、前置递增
	int a = 10;
	++a;  // 让变量+1
	cout << "a = " << a << endl;

	//2、后置递增
	int b = 10;
	b++;  //让变量+1
	cout << "b = " << b << endl;

	//3、前置和后置的区别
	//前置递增 先让变量+1 然后进行表达式运算
	int a2 = 10;
	int b2 = ++a2 * 10;
	cout << "a2 = " << a2 << endl;
	cout << "b2 = " << b2 << endl;

	//后置递增 先进行表达式运算 然后让变量+1
	int a3 = 10;
	int b3 = a3++ * 10;
	cout << "a3 = " << a3 << endl;
	cout << "b3 = " << b3 << endl;

	//前置递减 先让变量-1 然后进行表达式运算
	int a4 = 10;
	int b4 = --a4 * 10;
	cout << "a4 = " << a4 << endl;
	cout << "b4 = " << b4 << endl;

	//后置递减 先进行表达式运算 然后让变量-1
	int a5 = 10;
	int b5 = a5-- * 10;
	cout << "a5 = " << a5 << endl;
	cout << "b5 = " << b5 << endl;

	system("pause");
	return 0;
}
*/




// Task 16：数据类型-赋值运算符
/*
#include<iostream>
using namespace std;

int main()
{
	//赋值运算符

	// =
	int a = 10;
	a = 100;
	cout << "a = " << a << endl;

	// +=
	a = 10;
	a += 2;  // a = a + 2
	cout << "a = " << a << endl;

	// -=
	a = 10;
	a -= 2;  // a = a - 2
	cout << "a = " << a << endl;

	// *=
	a = 10;
	a *= 2;  // a = a * 2
	cout << "a = " << a << endl;

	// /=
	a = 10;
	a /= 2;  // a = a / 2
	cout << "a = " << a << endl;

	// %=
	a = 10;
	a %= 2;  // a = a % 2
	cout << "a = " << a << endl;

	system("pause");
	return 0;
}
*/




// Task 17：数据类型-比较运算符
/*
#include<iostream>
using namespace std;

int main()
{
	//比较运算符（真为1 假为0）
	// ==
	int a = 10;
	int b = 20;

	cout << (a == b) << endl;

	// !=
	cout << (a != b) << endl;

	// >
	cout << (a > b) << endl;

	// <
	cout << (a < b) << endl;

	// >=
	cout << (a >= b) << endl;

	// <=
	cout << (a <= b) << endl;

	system("pause");
	return 0;
}
*/




// Task 18：数据类型-逻辑运算符（非、与、或）
/*
#include<iostream>
using namespace std;

int main()
{
	//逻辑运算符 - 非  !
	int a = 10;
	//在C++中 除了0 都为真
	cout << !a << endl;
	cout << !!a << endl;

	//逻辑运算符 - 与  &&
	//同真为真，其余为假
	cout << (0 && 0) << endl;  // 0 假
	cout << (0 && 1) << endl;  // 0 假
	cout << (1 && 1) << endl;  // 1 真


	// 逻辑运算符 - 或 ||
	//同假为假，其余为真
	cout << (0 || 0) << endl;  // 0 假
	cout << (0 || 1) << endl;  // 1 真
	cout << (1 || 1) << endl;  // 1 真

	system("pause");
	return 0;
}
*/




// Task 19：程序流程结构-选择结构-单行if语句
/*
#include<iostream>
using namespace std;

int main()
{
	//选择结构 - 单行格式if语句：if(条件){ 条件满足执行的语句 }
	//用户输入分数，如果Final score大于7，视为考上IC和UCL，在屏幕上输出

	//1、用户输入分数
	int ListeningScore = 0;
	int ReadingScore = 0;
	int WritingScore = 0;
	int SpeakingScore = 0;
	int FinalScore = 0;
	cout << "请输入Listening Score：" << endl;
	cin >> ListeningScore;
	cout << "请输入Reading Score：" << endl;
	cin >> ReadingScore;
	cout << "请输入Writing Score：" << endl;
	cin >> WritingScore;
	cout << "请输入Speaking Score：" << endl;
	cin >> SpeakingScore;
	FinalScore = (ListeningScore + ReadingScore + WritingScore + SpeakingScore) / 4;

	//2、打印用户输入的分数
	cout << "您的FinalScore是：" << FinalScore << endl;

	//3、判断分数是否大于7分，如果大于，那么输出
	//注意事项，if条件后面不要加分号▲
	if (FinalScore > 7)
	{
		cout << "恭喜您拿到IC和UCL的Offer！" << endl;

	}

	system("pause");
	return 0;
}
*/




// Task 20：程序流程结构-选择结构-多行if语句
/*
#include<iostream>
using namespace std;

int main()
{
	//选择结构 - 多行if语句
	//用户输入分数，如果Final score大于7，视为考上IC和UCL，在屏幕上输出
	//如果小于等于7，打印继续努力！

	//1、用户输入分数
	int ListeningScore = 0;
	int ReadingScore = 0;
	int WritingScore = 0;
	int SpeakingScore = 0;
	int FinalScore = 0;
	cout << "请输入Listening Score：" << endl;
	cin >> ListeningScore;
	cout << "请输入Reading Score：" << endl;
	cin >> ReadingScore;
	cout << "请输入Writing Score：" << endl;
	cin >> WritingScore;
	cout << "请输入Speaking Score：" << endl;
	cin >> SpeakingScore;
	FinalScore = (ListeningScore + ReadingScore + WritingScore + SpeakingScore) / 4;

	//2、打印用户输入的分数
	cout << "您的FinalScore是：" << FinalScore << endl;

	//3、判断分数是否大于7分，如果大于，那么输出恭喜，其他情况则继续努力！
	//注意事项，if条件后面不要加分号▲
	if (FinalScore > 7)  //大于7则执行下面大括号的内容
	{
		cout << "恭喜您拿到IC和UCL的Offer！" << endl;
	}
	else   //其他情况则执行下面大括号的内容
	{
		cout << "继续努力！" << endl;
	}
	system("pause");
	return 0;
}
*/




// Task 21：程序流程结构 - 选择结构 - 多条件if语句
/*
#include<iostream>
using namespace std;

int main()
{
	//选择结构 - 多条件的if语句：if(条件1){ 条件1满足执行的语句 } else if(条件2){ 条件2满足执行的语句 }...else{都不满足执行的语句}

	//用户输入分数，如果Final score大于7，视为“考上IC和UCL”，在屏幕上输出
	//如果大于6.5，打印“爱大曼大随便挑，继续努力！”
	//如果大于6，打印“KCL和NTU都行！”
	//如果小于等于6，打印“同志还需努力！”

	//1、用户输入分数
	float ListeningScore = 0;
	float ReadingScore = 0;
	float WritingScore = 0;
	float SpeakingScore = 0;
	float FinalScore = 0;
	cout << "请输入Listening Score：" << endl;
	cin >> ListeningScore;
	cout << "请输入Reading Score：" << endl;
	cin >> ReadingScore;
	cout << "请输入Writing Score：" << endl;
	cin >> WritingScore;
	cout << "请输入Speaking Score：" << endl;
	cin >> SpeakingScore;
	FinalScore = (ListeningScore + ReadingScore + WritingScore + SpeakingScore) / 4;

	//2、打印用户输入的分数
	cout << "您的FinalScore是：" << FinalScore << endl;

	//3、判断分数是否大于7分，如果大于，那么输出恭喜，其他情况则继续努力！
	//注意事项，if条件后面不要加分号▲
	if (FinalScore >= 7)  //大于7则执行下面大括号的内容
	{
		cout << "恭喜您拿到IC和UCL的Offer！" << endl;
	}
	else if (FinalScore >= 6.5) //其他情况则执行下面大括号的内容
	{
		cout << "爱大曼大随便挑，继续努力！" << endl;
	}
	else if (FinalScore >= 6)
	{
		cout << "KCL和NTU都行！" << endl;
	}
	else
	{
		cout << "同志还需努力！" << endl;
	}

	system("pause");
	return 0;
}
*/




// Task 22：程序流程结构 - 选择结构 - 嵌套if语句
/*
#include<iostream>
using namespace std;

int main()
{
	int score = 0;
	//提示用户输入一个高考考试分数,根据分数做如下判断分数如果大于600分视为考上一本，大于500分考上二本，大于400考上三本，其余视为未考上
	//本科在一本分数中，如果大于700分，考入北大，大于650分，考入清华，大于600考入人大。


	//1、提示输入一个高考分数
	cout << "请输入高考考试分数：" << endl;
	cin >> score;

	//2、显示高考分数
	cout << "您输入的高考分数为：" << score << endl;

	//3、判断
	//如果大于600  一本
		//大于700  北大
		//大于650  清华
		//其余     人大
	//如果大于500  二本
	//如果大于400  三本
	//其余情况，未考上本科
	if (score > 600)
	{
		cout << "恭喜您考入一本大学" << endl;
		if (score > 700)
		{
			cout << "恭喜您考入北京大学！";
		}
		else if (score > 650)
		{
			cout << "恭喜您考入清华大学！";
		}
		else
		{
			cout << "恭喜您考入中国人民大学！";
		}
	}
	else if (score > 500)
	{
		cout << "恭喜您考入二本大学" << endl;
	}
	else if (score > 400)
	{
		cout << "恭喜您考入三本大学" << endl;
	}
	else
	{
		cout << "未考上本科，请再接再厉" << endl;
	}

	system("pause");
	return 0;
}
*/




// Task 23：程序流程结构 - 选择结构案例 - 三只小猪称体重
/*
#include<iostream>
using namespace std;

int main()
{
	//三只小猪称体重，判断哪只最重

	//1、创建三只小猪的体重变量
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;

	//2、让用户输入三只小猪的重量
	cout << "请输入小猪zyh的体重" << endl;
	cin >> num1;

	cout << "请输入小猪zbh的体重" << endl;
	cin >> num2;

	cout << "请输入小猪zdm的体重" << endl;
	cin >> num3;

	cout << "小猪zyh的体重为：" << num1 << endl;
	cout << "小猪zbh的体重为：" << num2 << endl;
	cout << "小猪zdm的体重为：" << num3 << endl;

	//3、判断哪只最重
	//先判断zyh和zbh的重量
	if (num1 > num2)  // ZYH比ZBH重
	{
		if (num1 > num3)  // ZYH比ZDM重
		{
			cout << "小猪zyh最重" << endl;
		}
		else  // ZDM比ZYH重
		{
			cout << "小猪zdm最重" << endl;
		}
	}
	else  // ZBH比ZYH重
	{
		if (num2 > num3)  // ZBH比ZDM重
		{
			cout << "小猪zbh最重" << endl;
		}
		else  // ZDM比ZBH重
		{
			cout << "小猪zdm最重" << endl;
		}
	}

	system("pause");
	return 0;
}
*/




// Task 24：程序流程结构 - 选择结构案例 - 三目运算符
/*
#include<iostream>
using namespace std;

int main()
{
	//三目运算符

	//创建三个变量 a b c
	//将a和b做比较，将变量大的值赋值给变量c

	int a = 10;
	int b = 20;
	int c = 0;

	c = (a > b ? a : b);    // 如果a大于b，则结果为a，否则为b

	cout << "c = " << c << endl;

	//在C++中三目运算符返回的是变量，可以继续赋值
	(a > b ? a : b) = 100;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;


	system("pause");
	return 0;
}
*/




// Task 25：程序流程结构 - 选择结构 - Switch语句
/*
#include<iostream>
using namespace std;

int main()
{
	//switch语句
	//给电影进行打分
	// 9 ~ 10  经典
	// 7 ~ 8   非常好
	// 5 ~ 6   一般
	// 5以下   烂片
	//▲注意事项：case里面如果没有break，那么程序会一直向下执行

	//1、提示用户给电影评分
	cout << "请给电影进行打分" << endl;

	//2、用户开始进行打分
	int score = 0;
	cin >> score;
	cout << "您打的分数为：" << score << endl;

	//3、根据用户输入的分数来提示用户最后的结果

	switch (score)
	{
	case 10:
		cout << "您认为是经典电影" << endl;
		break;  // 退出当前分支
	case 9:
		cout << "您认为是经典电影" << endl;
		break;  // 退出当前分支
	case 8:
		cout << "您认为是非常好的电影" << endl;
		break;  // 退出当前分支
	case 7:
		cout << "您认为是非常好的电影" << endl;
		break;  // 退出当前分支
	case 6:
		cout << "您认为是一般的电影" << endl;
		break;  // 退出当前分支
	case 5:
		cout << "您认为是一般的电影" << endl;
		break;  // 退出当前分支
	default:  // 类似if语句里面的else
		cout << "您认为这是一个烂片" << endl;
		break;  // 退出当前分支
	}

	// if 和 switch 之间的区别？▲
	//switch缺点：判断时候只能是整型或者字符型，不可以判断区间
	//switch优点：结构清晰，执行效率高

	system("pause");
	return 0;
}
*/




// Task 26：程序流程结构 - 循环结构 - While语句
/*
#include<iostream>
using namespace std;

int main()
{
	//while循环
	//在屏幕中打印 0 ~ 9 这10个数字
	int num = 0;

	//while() 中填入循环条件
	//注意事项：在写循环一定要避免死循环的出现，必须提供跳出循环的出口

	while (num < 10)
	{
		cout << num << endl;
		num++;
	}

	system("pause");
	return 0;
}
*/




// Task 27：程序流程结构 - 循环结构案例 - 猜数字
/*
#include<iostream>
using namespace std;
//time系统时间头文件包含
#include<ctime>

int main()
{
	cout << "这是一个猜数字的游戏！请开始猜数字！" << endl;
	//添加随机数种子▲  作用利用当前系统时间生成随机数，防止每次随机数都一样
	srand((unsigned int)time(NULL));

	//1、系统生成随机数
	int num = rand() % 100 + 1;   // rand()%100 + 1   生成  0 ~ 99 + 1 随机数
	// cout << num << endl;

	//2、玩家进行猜测
	int val = 0; // 玩家输入的数据

	//3、判断玩家的猜测
	while (1)
	{
		cin >> val;
		if (val > num)
		{
			cout << "猜测结果过大" << endl;
		}
		else if (val < num)
		{
			cout << "猜测结果过小" << endl;
		}
		else
		{
			cout << "恭喜你猜对了" << endl;
			//猜对   退出游戏
			break; // break，可以利用该关键字来退出当前循环
		}
		//猜对    退出游戏
		//猜错    提示猜的结果  过大或者过小  重新返回第2步
	}

	system("pause");
	return 0;
}
*/




// Task 28：程序流程结构 - 循环结构 - dowhile语句
/*
#include<iostream>;
using namespace std;

int main()
{
	//do...while语句
	//while是先判断，再执行
	//do...while与while的区别在于do...while会先执行一次循环语句，再判断循环条件
	//在屏幕中输出 0 到 9 这10个数字

	int num = 0;

	do
	{
		cout << num << endl;
		num++;
	}
	while (num < 10);   //正常输出0-9


	do
	{
		cout << num << endl;
		num++;
	}
	while (num);    //先执行num就变成1，会导致无限循环


	while(num)
	{
		cout << num << endl;
		num++;
	}    //先判断num就是0，直接没有输出

	system("pause");
	return 0;
}
*/




// Task 29：程序流程结构 - 循环结构案例 - 水仙花数
/*
#include<iostream>;
using namespace std;

int main()
{
	//水仙花数是指一个3位数，它的每个位上的数字的3次幂之和等于它本身

	//1、先打印所有三位数字
	int num = 100;
	int gw = 0;  //个位
	int sw = 0;  //十位
	int bw = 0;  //百位

	do
	{
		//2、从所有三位数字中找到水仙花数

		gw = num % 10;    //获取数字的个位▲
		sw = num / 10 % 10;   //获取数字的十位▲
		bw = num / 100;   //获取数字的百位▲

		if (gw * gw * gw + sw * sw * sw + bw * bw * bw == num)
		{
			cout << num << endl;
		}

		num++;

	} while (num < 1000);

	system("pause");
	return 0;
}
*/




// Task 30：程序流程结构 - 循环结构 - for循环
/*
#include<iostream>;
using namespace std;

int main()
{
	//for循环
	//从数字0 打印到 数字9

	for (int i = 0; i < 10; i++)
	{
		// int i = 0 首先执行;其次是 i < 10;然后执行for循环的内容 cout << i << endl;最后执行i++
		cout << i << endl;
	}
	system("pause");
	return 0;
}
*/




// Task 31：程序流程结构 - 循环结构案例 - 敲桌子
/*
#include<iostream>
using namespace std;

int main()
{
	//敲桌子案例
	for (int num = 1; num <= 100; num++)
	{
		//个位数是7的不行、十位数是7的不行、是7的倍数的不行
		if (num % 10 == 7 || num / 10 % 10 == 7 || num % 7 == 0)
		{
			cout << "敲桌子！" << endl;
		}
		else   //其他情况直接说数字
		{
			cout << num << endl;
		}
	}
	system("pause");
	return 0;
}
*/




// Task 32：程序流程结构 - 嵌套循环
/*
#include<iostream>
using namespace std;

int main()
{
	//利用嵌套循环实现星图

	//打印10*10的星图

	//外层执行一次，内层执行一周
	//外层循环
	for (int i = 0; i < 10; i++)
	{
		//内层循环
		for (int j = 0; j < 10; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}
*/




// Task 33：程序流程结构 - 嵌套循环案例 - 乘法口诀表
/*
#include<iostream>
using namespace std;

int main()
{
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			if (j <= i)
			{
				cout << j << "×" << i << "=" << (i * j) << "\t";
			}
		}
		cout << endl;
	}

	system("pause");
	return 0;
}
*/




// Task 34：程序流程结构 - 跳转语句 - break语句
/*
#include<iostream>
using namespace std;

int main()
{
	//break语句
	//作用：用于跳出选择结构或者循环结构

	//break的使用时机
	//1、出现在switch条件语句中，作用是终止case并跳出switch
	//2、出现在循环语句中，作用是跳出当前的循环语句
	//3、出现在嵌套循环中，跳出最近的内层循环语句


	////1、出现在switch语句中
	//cout << "请选择副本的难度" << endl;
	//cout << "1、普通" << endl;
	//cout << "2、中等" << endl;
	//cout << "3、困难" << endl;

	//int select = 0;  //创建选择结果的变量

	//cin >> select;  //等待用户输入

	//switch (select)
	//{
	//case 1:
	//	cout << "您选择的是普通难度" << endl;
	//	break; //退出switch语句
	//case 2:
	//	cout << "您选择的是中等难度" << endl;
	//	break; //退出switch语句
	//case 3:
	//	cout << "您选择的是困难难度" << endl;
	//	break; //退出switch语句
	//default:
	//	break;
	//}



	////2、出现在循环语句中
	//for (int i = 0; i < 10; i++)
	//{
	//	//如果i等于5，退出循环，不再打印
	//	if (i == 5)
	//	{
	//		break; //退出循环
	//	}
	//	cout << i << endl;
	//}



	//3、出现在嵌套循环语句中
	for (int i = 0; i < 10; i++)
	{

		for (int j = 0; j < 10; j++)
		{
			if (j == 5)
			{
				break;  //退出内层循环
				//得到10行5列的星图
			}
			cout << "* ";
		}
		cout << endl;
	}

	system("pause");
	return 0;
}
*/




// Task 35：程序流程结构 - 跳转语句 - continue语句
/*
#include<iostream>
using namespace std;

int main()
{
	//continue语句
	//执行到本行，就不再执行后面的代码了，而执行下一次循环

	for (int i = 0; i <= 100; i++)
	{
		//如果是奇数输出，偶数不输出
		if (i % 2 == 0)
		{
			continue;//可以筛选条件，执行到此就不再向下执行，执行下一次循环
			//区别：break会退出循环，而continue不会▲
		}
		cout << i << endl;
	}

	system("pause");
	return 0;
}
*/




// Task 36：程序流程结构 - 跳转语句 - goto语句
/*
#include<iostream>
using namespace std;

int main()
{
	//goto语句（不建议使用）
	//作用：可以无条件跳转语句
	//如果标记的名称存在，执行到goto语句时，会跳转到标记的位置

	cout << "1、xxxx" << endl;

	cout << "2、xxxx" << endl;
	goto FLAG;  //跳转到FALG

	cout << "3、xxxx" << endl;

	cout << "4、xxxx" << endl;
	FLAG:  //建立标记

	cout << "5、xxxx" << endl;

	system("pause");
	return 0;
}
*/




// Task 37：数组 - 一维数组定义方式
/*
#include<iostream>
using namespace std;

int main()
{
	//数组特点：放在一块连续的内存空间中
	//数组中每个元素都是相同数据类型

	//1、数据类型  数组名[ 数组长度 ];
	//2、数据类型  数组名[ 数组长度 ] = { 值1, 值2 ...};
	//3、数据类型  数组名[ ] = { 值1, 值2 ...};


	////1、数据类型  数组名[ 数组长度 ];
	//int arr[5];
	////给数组中的元素进行赋值
	////数组元素的下标是从0开始索引的
	//arr[0] = 10;
	//arr[1] = 20;
	//arr[2] = 30;
	//arr[3] = 40;
	//arr[4] = 50;

	////访问数据元素
	//cout << arr[0] << endl;
	//cout << arr[1] << endl;
	//cout << arr[2] << endl;
	//cout << arr[3] << endl;
	//cout << arr[4] << endl;


	////2、数据类型  数组名[ 数组长度 ] = { 值1, 值2 ...};
	////如果在初始化数据时，没有全部填写完，会用0来填补剩余数据
	//int arr2[5] = { 10,20,30,40,50 };

	////cout << arr2[0] << endl;
	////cout << arr2[1] << endl;
	////cout << arr2[2] << endl;
	////cout << arr2[3] << endl;
	////cout << arr2[4] << endl;
	////
	////利用循环 输出数组中的元素
	//for (int i = 0; i < 5; i++)
	//{
	//	cout << arr2[i] << endl;
	//}


	//3、数据类型  数组名[ ] = { 值1, 值2 ...};
	//定义数组的时候，必须有初始长度
	int arr3[] = { 10,20,30,40,50,60,70,80,90 };

	for (int i = 0; i < 10; i++)
	{
		cout << arr3[i] << endl;
	}


	system("pause");
	return 0;
}
*/




// Task 38：数组 - 一维数组 - 数组名
/*
#include<iostream>
using namespace std;

int main()
{
	//一维数组名称用途：
	//1、可以数组名统计整个数组占用内存大小
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "整个数组占用的内存空间为：" << sizeof(arr) << endl;
	cout << "每个元素占用内存空间为：" << sizeof(arr[0]) << endl;
	cout << "数组中元素的个数为：" << sizeof(arr) / sizeof(arr[0]) << endl;

	//2、可以获取数组在内存中的首地址
	cout << "数组的首地址为：" << (int)arr << endl;   //int可以转16进制地址为10进制
	cout << "数组中第一个元素地址为：" << (int)&arr[0] << endl;   //记得加"&"用于取址
	cout << "数组中第二个元素地址为：" << (int)&arr[1] << endl;   //记得加"&"用于取址

	//数组名是常量，不可以进行赋值操作
	//arr = 100;

	system("pause");
	return 0;
}
*/




// Task 39：数组 - 一维数组案例 - 五只小猪称体重
/*
#include<iostream>
using namespace std;

int main()
{
	//1、创建五只小猪体重的数组
	int arr[5] = { 90,130,100,140,160 };
	//2、从数组中找到最大值
	int max = 0;  //先认定一个最大值为0


	////lzc思路：
	//for (int i = 0; i < 4; i++)
	//{
	//	max = arr[i];
	//	if (arr[i] < arr[i + 1])
	//	{
	//		max = arr[i + 1];
	//		cout << "目前最大值是：" << max << endl;
	//	}
	//}
	//cout << "最大值最终是：" << max << endl;


	//黑马C++思路：
	for (int i = 0; i < 5; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			cout << "目前最大值是：" << max << endl;
		}
	}
	cout << "最大值最终是：" << max << endl;


	system("pause");
	return 0;
}
*/




// Task 40：数组 - 一维数组案例 - 元素逆置
/*
#include<iostream>
using namespace std;

int main()
{
	//实现数组元素逆置

	//1、创建数组
	int arr[5] = { 1,3,2,5,4 };
	cout << "数组逆置前：" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}

	//2、实现逆置
	//2.1记录起始下标位置
	//2.2记录结束下标位置
	//2.3起始下标与结束下标的元素互换
	//2.4起始位置++   结束位置--
	//2.5循环执行2.1操作，直到起始位置 >= 结束位置

	int start = 0;  //起始下标
	int end = sizeof(arr) / sizeof(arr[0]) - 1;  //结束下标★

	while (start < end)
	{
		//实现元素互换★
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;

		//下标更新
		start++;
		end--;
	}

	//3、打印逆置后的数组
	cout << "数组元素逆置后：" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}

	system("pause");
	return 0;
}
*/




// Task 41：数组 - 一维数组 - 冒泡排序
/*
#include<iostream>
using namespace std;

int main()
{
	//冒泡排序思路（注意排序轮数和对比次数★）
	int arr[9] = { 1,2,4,3,7,9,8,5,0 };
	int temp = 0;  //定义临时变量
	int time = 1;
	//排序总轮数 = 元素个数 - 1 ▲▲▲
	int length = sizeof(arr) / sizeof(arr[0]);
	//外部排序轮数i
	for (int i = 0; i < length - 1; i++)
	{
		//内部循环对比j
		//每轮对比次数 = 元素个数 - 当前轮数 - 1 ▲▲▲
		for (int j = 0; j < length - i - 1; j++)
		{
			//如果第一个数字比第二个数字大，交换两个数字
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
			cout << "现在的数组顺序是：";
			for (int k = 0; k < 9; k++)
			{
				cout << arr[k];
			}
			cout << endl;
		}
		cout << "这是第" << time << "轮冒泡" << endl;
		time++;
	}

	system("pause");
	return 0;
}
*/




// Task 42：数组 - 二维数组定义方式
/*
#include<iostream>
using namespace std;

int main()
{
	//二维数组定义方式

	//1、数据类型  数组名[ 行数 ][ 列数 ];
	//2、数据类型  数组名[ 行数 ][ 列数 ] = { { 数据1, 数据2 } , { 数据3, 数据4 } };
	//3、数据类型  数组名[ 行数 ][ 列数 ] = { 数据1, 数据2, 数据3, 数据4 };
	//4、数据类型  数组名[  ][ 列数 ] = { 数据1, 数据2, 数据3, 数据4 };


	////1、数据类型  数组名[ 行数 ][ 列数 ];
	//int arr[2][3];
	//arr[0][0] = 1;
	//arr[0][1] = 2;
	//arr[0][2] = 3;
	//arr[1][0] = 4;
	//arr[1][1] = 5;
	//arr[1][2] = 6;

	////外层循环打印行数，内层循环打印列数
	//for (int i = 0; i < 2; i++)
	//{
	//	for (int j = 0; j < 3; j++)
	//	{
	//		cout << arr[i][j] << endl;
	//	}
	//}


	////2、数据类型  数组名[ 行数 ][ 列数 ] = { { 数据1, 数据2 } , { 数据3, 数据4 } };
	//int arr2[2][3] =
	//{
	//	{1,2,3},
	//	{4,5,6}
	//};
	//for (int i = 0; i < 2; i++)
	//{
	//	for (int j = 0; j < 3; j++)
	//	{
	//		cout << arr2[i][j] << endl;
	//	}
	//}


	////3、数据类型  数组名[ 行数 ][ 列数 ] = { 数据1, 数据2, 数据3, 数据4 };
	//int arr3[2][3] = { 1,2,3,4,5,6 };
	//	for (int i = 0; i < 2; i++)
	//	{
	//		for (int j = 0; j < 3; j++)
	//		{
	//			cout << arr3[i][j] << endl;
	//		}
	//	}


	//4、数据类型  数组名[  ][ 列数 ] = { 数据1, 数据2, 数据3, 数据4 };
	//可以省去行数但是不能省去列数★
	int arr4[][3] = { 1,2,3,4,5,6 };
		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				cout << arr4[i][j] << endl;
			}
		}

	system("pause");
	return 0;
}
*/




// Task 43：数组 - 二维数组 - 数组名
/*
#include<iostream>
using namespace std;


int main()

{
	//二维数组名称用途

	//1、可以查看占用内存空间大小
	int arr[2][3] =
	{
		{1,2,3},
		{4,5,6}
	};
	//int类型 6*4=24    double类型 6*8=48
	cout << "二维数组占用内存空间为：" << sizeof(arr) << endl;
	//int类型 3*4=12
	cout << "二维数组第一行占用内存为：" << sizeof(arr[0]) << endl;
	//int类型 1*4=4
	cout << "二维数组第一个元素占用内存为：" << sizeof(arr[0][0]) << endl;

	cout << "二维数组行数为：" << sizeof(arr) / sizeof(arr[0]) << endl;
	cout << "二维数组列数为：" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;


	//2、可以查看二维数组的首地址
	//二位数组的首地址、第一行首地址、第一个元素地址均为同一个
	cout << "二维数组的首地址为：" << (int)arr << endl;
	cout << "二维数组第一行首地址为：" << (int)arr[0] << endl;
	cout << "二维数组第二行首地址为：" << (int)arr[1] << endl;
	//元素的首地址记得加取址符“&”
	cout << "二维数组第一个元素首地址为：" << (int)&arr[0][0] << endl;
	cout << "二维数组第二个元素首地址为：" << (int)&arr[0][1] << endl;

	system("pause");
	return 0;
}
*/




// Task 44：数组 - 二维数组案例 - 考试成绩统计
/*
#include<iostream>
using namespace std;
#include<string>


int main()

{
	//1、创建二维数组
	int score[3][3] =
	{
		{100,100,100},
		{90,50,100},
		{60,70,80}
	};

	string names[3] = { "张三","李四","王五" };

	//2、统计每个人的总和分数
	//外部循环
	for (int i = 0; i < 3; i++)
	{
		//内部循环 每一行所有列相加
		int grade = 0;

		for (int j = 0; j < 3; j++)
		{
			//grade = grade + score[i][j];
			grade += score[i][j];
		}
		cout << names[i] << "同学的分数为：" << grade << endl;
	}

	system("pause");
	return 0;
}
*/




// Task 45：函数 - 函数的定义
/*
#include<iostream>
using namespace std;

//实现一个加法函数，功能是：传入两个整型数据，计算数据相加的结果，并且返回

//1、返回值类型   int
//2、函数名   add
//3、参数列表   (int num1 , int num2)
//4、函数体语句    int sum = num1 + num2;
//5、return表达式   return sum;

//语法▲
//返回值类型 函数名 (参数列表) { 函数体语句 return表达式 }


int add(int num1, int num2)
{
	int sum = num1 + num2;
	return sum;
}

int main()
{
	cout << add(3, 4) << endl;
	system("pause");
	return 0;

}
*/




// Task 46：函数 - 函数的调用
/*
#include<iostream>
using namespace std;

//定义加法函数
//函数定义的时候，num1和num2并没有真实数据，她只是一个形式上的参数，简称形参
int add(int num1, int num2)
{
	int sum = num1 + num2;
	return sum;
}

int main()
{
	//main函数中调用add函数
	int a = 10;
	int b = 20;

	//函数调用语法：函数名称 (参数)
	//a和b称为 实际参数，简称实参
	//当调用函数时候，实参的值会传递给形参
	int c = add(a, b);
	cout << c << endl;

	a = 100;
	b = 500;
	c = add(a, b);
	cout << c << endl;

	system("pause");
	return 0;
	//形参不能传给实参，但实参可以传递给形参
}
*/




// Task 47：函数 - 值传递
/*
#include<iostream>
using namespace std;

//值传递
//定义函数，实现两个数字进行交换函数

//如果一个函数不需要返回值，声明的时候可以写void
void swap(int num1, int num2)
{
	cout << "交换前：" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;

	int temp = num1;
	num1 = num2;
	num2 = temp;

	cout << "交换后：" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;

	//return; 返回值不需要的时候，可以不写return
}

int main()
{
	int a = 10;
	int b = 20;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	//当我们做值传递的时候，函数的形参发生改变，并不会影响实参(a、b不变)
	swap(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	system("pause");
	return 0;
}
*/




// Task 48：函数 - 常见的样式
/*
#include<iostream>
using namespace std;

//函数的常见样式
//1、无参无返
void test01()
{
	cout << "This is test01!" << endl;
}
//2、有参无返
void test02(int a)
{
	cout << "This is test02 a = " << a << endl;
}
//3、无参有返
int test03()
{
	cout << "This is test03" << endl;
	return 100;
}
//4、有参有返
int test04(int a)
{
	cout << "This is test04 a = " << a << endl;
	return a;
}

int main()
{
	//无参无返函数调用
	test01();
	//有参无返函数调用
	test02(100);
	//无参有返函数调用
	int num1 = test03();
	cout << "num1 = " << num1 << endl;
	//有参有返函数调用
	int num2 = test04(1000);
	cout << "num2 = " << num2 << endl;

	system("pause");
	return 0;
}
*/




// Task 49：函数 - 函数的声明
/*
#include<iostream>
using namespace std;

//函数的声明
//比较函数，实现两个整型数字进行比较，返回较大的值

//提前告诉编译器函数的存在，可以利用函数的声明
//函数的声明(有这个就可以把函数定义写在main函数之后)
//函数的声明可以写多次，但是定义只能有一次▲
int max(int a, int b);

int main()
{
	int a = 10;
	int b = 20;

	cout << max(a, b) << endl;

	system("pause");
	return 0;
}

//定义
int max(int a, int b)
{
	return a > b ? a : b;  //三目运算符
}
*/




// Task 50：函数 - 函数的分文件编写
/*
#include<iostream>
using namespace std;
#include"swap.h"

//函数的分文件编写
//实现两个数字进行交换的函数

////函数的声明
//void swep(int a, int b);
////函数的定义
//void swep(int a, int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//}

//1、创建.h后缀名的头文件
//2、创建.cpp后缀名的源文件
//3、在头文件中写函数的声明
//4、在源文件中写函数的定义

int main()
{
	int a = 10;
	int b = 20;

	swap(a, b);

	system("pause");
	return 0;
}
*/




// Task 51：指针 - 指针的定义和使用
/*
#include<iostream>
using namespace std;

int main()
{
	//1、定义指针
	int a = 10;
	//指针定义的语法：数据类型* 指针变量名:
	int* p;
	//让指针记录变量a的地址
	p = &a;  //建立关系
	cout << "a的地址为：" << &a << endl;
	cout << "指针p为：" << p << endl;  //指针就是地址

	//2、使用指针
	//可以通过解引用的方式来找到指针指向的内存
	//指针前加 *代表解引用，找到指针指向的内存

	*p = 1000;  //指针指向的内存(可以访问也可以修改▲▲▲▲▲)
	cout << "a = " << a << endl;
	cout << "*p = " << *p << endl;

	system("pause");
	return 0;
}
*/




// Task 52：指针 - 指针所占内存空间
/*
#include<iostream>
using namespace std;

int main()
{
	//指针所占内存空间
	int a = 10;
	//int* p;
	//p = &a;
	int* p = &a;  //和上两行代码效果一样

	//X64代表64位操作系统，不论什么数据类型，所占字节均为8（▲▲▲▲）
	//X86代表32位操作系统，不论什么数据类型，所占字节均为4（▲▲▲▲）
	cout << "sizeof (int *) = " << sizeof(int *) << endl;
	cout << "sizeof (float *) = " << sizeof(float *) << endl;
	cout << "sizeof (double *) = " << sizeof(double *) << endl;
	cout << "sizeof (char *) = " << sizeof(char *) << endl;

	system("pause");
	return 0;
}
*/




// Task 53：指针 - 空指针
/*
#include<iostream>
using namespace std;

int main()
{
	//空指针：指针变量指向内存中编号为0的空间
	//1、空指针用于初始化指针变量
	int* p = NULL;

	//2、空指针指向的内存是不可以访问的
	//cout << *p << endl;
	//*p = 100; 
	//写作访问权限冲突（0~255之间的内存编号是系统占用的，因此不可以访问）

	system("pause");
	return 0;
}
*/




// Task 54：指针 - 野指针
/*
#include<iostream>
using namespace std;

int main()
{
	//野指针：指向非法的内存空间
	//在程序中，尽量避免出现野指针
	int* p = (int*)0x1100;
	cout << *p << endl;

	system("pause");
	return 0;
	//总结:空指针和野指针都不是我们申请的空间，因此不要访问
}
*/





// Task 55：指针 - const修饰指针
/*
#include<iostream>
using namespace std;

int main()
{
	int a = 10;
	int b = 20;
	//记名字：const翻译成“常量”，p翻译成“指针”，记先后顺序即可
	//记特点：const修饰int，则数值不可改，指向可改；const修饰p，则指向不可改，数值可改

	//1、const修饰指针 —— 常量指针
	const int* p1 = &a;
	//特点：指针的指向可以修改，但是指针指向的值不可以改
	//*p = 30;    //错误，指针指向的值不可以改
	p1 = &b;     //正确，指针指向可以改
	cout << *p1 << endl;

	//2、const修饰常量 —— 指针常量
	int* const p2 = &a;
	//特点：指针指向的值可以改，但是指针的指向不可以修改
	*p2 = 30;    //正确，指针指向的值可以改
	//p = &b;     //错误，指针指向不可以改
	cout << *p2 << endl;

	//3、const即修饰指针，又修饰常量
	const int* const p3 = &a;
	//特点：指针的指向、指针指向的值都不可以改
	//*p = 30;    //错误，指针指向的值不可以改
	//p = &b;     //错误，指针指向不可以改

	system("pause");
	return 0;
}
*/




// Task 56：指针 - 指针和数组
/*
#include<iostream>
using namespace std;

int main()
{
	//指针和数组
	//利用指针访问数组中的元素

	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	cout << "第一个元素为：" << arr[0] << endl; //From Task38

	int* p = arr;   //arr就是数组首地址▲▲▲

	cout << "利用指针访问第一个元素：" << *p << endl;

	p++;//让指针向后偏移4个字节▲▲▲

	cout << "利用指针访问第二个元素：" << *p << endl;

	cout << "利用指针遍历数组" << endl;

	int* p2 = arr;

	for (int i = 0; i < 10; i++)
	{
		//cout << arr[i] << endl;
		cout << *p2 << endl;
		p2++;
	}

	system("pause");
	return 0;
}
*/




// Task 57：指针 - 指针和函数
/*
#include<iostream>
using namespace std;

//实现两个数字进行交换
void swap01(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "swap01 a = " << a << endl;  //形参变化
	cout << "swap01 b = " << b << endl;  //形参变化
}
void swap02(int* p1, int* p2)  //* p1是指a的地址，* p2是指b的地址
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;

}

int main()
{
	//指针和函数
	int a = 10;
	int b = 20;

	//1、值传递不会改变实参
	swap01(a, b);	   //值传递不可以修饰实参
	
	//2、地址传递会改变实参
	swap02(&a, &b);  //传入a和b的地址

	cout << "a = " << a << endl;   
	cout << "b = " << b << endl;   

	system("pause");
	return 0;
}
*/




// Task 58：指针 - 指针、数组和函数案例
/*
#include<iostream>
using namespace std;

//冒泡排序函数(From Task41)   参数1 数组的首地址   参数2 数组长度
void bubbleSort(int* arr, int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++) 
		{
			//如果j > j+1的值  交换数据
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

//打印数组的函数
void printArray(int* arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i];
	}
}

int main()
{
	//1、先创建数组
	int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };

	//数组长度
	int len = sizeof(arr) / sizeof(arr[0]);  //From Task38

	//2、创建函数，实现冒泡排序
	bubbleSort(arr, len);

	//3、打印排序后的数组
	printArray(arr, len);

	system("pause");
	return 0;
}
*/




// Task 59：结构体 - 结构体定义和使用
//结构体属于用户自定义的数据类型	允许用户存储不同的数据类型
/*

总结1：定义结构体时的关键字是struct，不可省略
总结2：创建结构体变量时，关键字struct可以省略
总结3：结构体变量利用操作符"."访问成员

#include<iostream>
using namespace std;
#include<string>

//1、创建学生数据类型  ： 学生包括（姓名，年龄，分数）
//自定义数据类型，一些类型集合组成的一个类型
//语法  struct 类型名称 { 成员列表 }
struct Student
{
	//成员列表
	string name;  //姓名
	int age;      //年龄
	int score;	  //分数

}s3;   //顺便创建结构体变量2.3

//2、通过学生类型创建具体学生

int main()
{
	//2.1 struct Student s1
	//struct 关键字可以省略（结构体变量创建时）
	struct Student s1;
	//给s1属性赋值，通过.访问结构体变量中的属性
	s1.name = "Frank";
	s1.age = 40;
	s1.score = 100;
	cout << "姓名：" << s1.name << " 年龄：" << s1.age << " 分数：" << s1.score << endl;
	
	//2.2 struct Student s2 = { ... }
	struct Student s2 = { "Fiona",22,99 };
	cout << "姓名：" << s2.name << " 年龄：" << s2.age << " 分数：" << s2.score << endl;
		 
	//2.3 在定义结构体时顺便创建结构体变量(不建议使用第三种)
	s3.name = "lip";
	s3.age = 18;
	s3.score = 110;
	cout << "姓名：" << s3.name << " 年龄：" << s3.age << " 分数：" << s3.score << endl;

	system("pause");
	return 0;
}
*/




// Task 60：结构体 - 结构体数组
/*
#include<iostream>
using namespace std;
#include<string>

//结构体数组
//1、定义结构体
struct Student
{
	string name;  //姓名
	int age;      //年龄
	int score;    //分数
};

int main()
{
	//2、创建结构体数组
	struct Student stuArray[8] =
	{
		{"Frank",18,100},
		{"Fiona",28,99},
		{"Lip",38,66}
	};
	
	//3、给结构体数组中的元素赋值
	stuArray[2].name = "Steve";
	stuArray[2].age = 80;
	stuArray[2].score = 60;

	//4、遍历结构体数组
	for (int i = 0; i < 3; i++)
	{
		cout << " 姓名是：" << stuArray[i].name << " 年龄是：" << stuArray[i].age << " 分数是：" << stuArray[i].score << endl;
	}

	system("pause");
	return 0;
}
*/




// Task 61：结构体 - 结构体指针
//总结:结构体指针可以通过->操作符 来访问结构体中的成员
/*
#include<iostream>
using namespace std;
#include<string>

//结构体指针
//定义学生结构体
struct student
{
	string name;
	int age;
	int score;
};

int main()
{
	//1、创建学生结构体变量
	//struct student s = { "Frank",18,100 };
	student s = { "Frank",18,100 };   //可以不加struct

	//2、通过指针指向结构体变量
	//struct student* p = &s;
	student* p = &s;   //可以不加struct

	//3、通过指针访问结构体变量中的数据
	cout << "姓名：" << p->name << "  年龄：" << p->age << "  分数：" << p->score << endl;

	system("pause");
	return 0;
}
*/




// Task 62：结构体 - 结构体嵌套结构体
//在结构体中可以定义另一个结构体作为成员，用来解决实际问题
/*
#include<iostream>
using namespace std;
#include<string>

//定义学生结构体
struct student
{
	string name; //学生姓名
	int age;     //学生年龄
	int score;   //学生成绩
};

//定义老师结构体
struct teacher
{
	int id;       //教师编号
	string name;  //教师姓名
	int age;      //教师年龄
	struct student stu;  //辅导的学生
};

int main()
{
	//结构体嵌套结构体
	//创建老师
	teacher t;
	t.id = 10000;
	t.name = "Lip";
	t.age = 19;
	t.stu.name = "Mandy";
	t.stu.age = 17;
	t.stu.score = 101;

	cout << "教师姓名：" << t.name << "  教师编号：" << t.id << "  教师年龄：" << t.age << endl;
	cout << "辅导的学生姓名：" << t.stu.name << "  学生年龄：" << t.stu.age << "  学生成绩：" << t.stu.score << endl;


	system("pause");
	return 0;
}
*/




// Task 63：结构体 - 结构体做函数参数
//总结:如果不想修改主函数中的数据，用值传递，反之用地址传递
/*
#include<iostream>
using namespace std;
#include<string>

//定义学生结构体
struct student
{
	string name;
	int age;
	int score;
};

//打印学生信息函数
//1、值传递
void printStudent(struct student s)
{
	//值传递直接用"."
	s.age = 100;   //值传递：形参依旧不影响实参
	cout << "子函数中  姓名：" << s.name << "  年龄：" << s.age << "  分数：" << s.score << endl;
}
//2、地址传递
void printStudent2(struct student* p)
{
	//地址传递需要用"->"
	p->age = 200;   //地址传递：形参可以修饰实参
	cout << "子函数2中  姓名：" << p->name << "  年龄：" << p->age << "  分数：" << p->score << endl;
}

int main()
{
	//结构体做函数参数
	//将学生传入到一个参数中，打印学生身上的所有信息

	//创建结构体变量
	struct student s;
	s.name = "Frank";
	s.age = 18;
	s.score = 100;

	//printStudent(s);   //值传递
	printStudent2(&s); //地址传递

	cout << "main函数中打印 姓名：" << s.name << "  年龄：" << s.age << "  分数：" << s.score << endl;

	system("pause");
	return 0;
}
*/




// Task 64：结构体 - 结构体中const的使用场景
/*
#include<iostream>
using namespace std;
#include<string>

//const的使用场景

//定义学生结构体
struct student
{
	string name;
	int age;
	int score;
};

//将函数中的形参改为指针，可以减少内存空间，而且不会复制新的副本出来
void printStudent(const student* s)//加入const，一旦有修改的操作就会报错，可防止我们的误操作
{
	//s->age = 150;   //指针隐患，容易误改信息
	cout << "姓名：" << s->name << "年龄：" << s->age << "分数：" << s->score << endl;
}

int main()
{
	//创建结构体变量
	struct student s = { "Frank",16,70 };

	//通过函数打印结构体变量信息
	printStudent(&s);

	cout << "main中Frank年龄为：" << s.age << endl;

	system("pause");
	return 0;
}
*/




// Task 65：结构体 - 结构体案例1
/*
#include<iostream>
using namespace std;
#include<string>
#include<ctime>

//学生的结构体定义
struct student
{
	string sName;
	int score;
};

//教师的结构体定义
struct teacher
{
	string tName;
	struct student sArray[5];    //结构体嵌套结构体，而且是结构体数组
};

//给老师和学生赋值的函数
void allocatespace(struct teacher tArray[], int len) //此处数组名就是地址
{
	string nameseed = "ABCDE";   //用于表示和区分哪一个学生
	//给老师开始赋值
	for (int i = 0; i < len; i++)
	{
		tArray[i].tName = "Teacher_";
		tArray[i].tName += nameseed[i];

		//通过循环给每名老师所带的学生赋值
		for (int j = 0; j < 5; j++)
		{
			tArray[i].sArray[j].sName = "student_";
			tArray[i].sArray[j].sName += nameseed[j];

			//随机数 From Task27
			int random = rand() % 61 + 40;   //  40 ~ 100
			tArray[i].sArray[j].score = random;
		}
	}
}

//打印所有信息
void printInfo(struct teacher tArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "老师姓名：" << tArray[i].tName << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "\t学生姓名：" << tArray[i].sArray[j].sName << " 考试分数：" << tArray[i].sArray[j].score << endl;
		}
	}
}

int main()
{
	//随机数种子
	srand((unsigned int)time(NULL));

	//1、创建3名教师的数组
	struct teacher tArray[3];

	//2、通过函数给3名教师的信息赋值，并给教师带的学生信息赋值
	int len = sizeof(tArray) / sizeof(tArray[0]);
	allocatespace(tArray, len);

	//3、打印所有老师及所带的学生信息
	printInfo(tArray, len);

	system("pause");
	return 0;
}
*/




// Task 66：结构体 - 结构体案例2
//C++编程 一定要注重阶段性代码输出检查★★★★★★★
/*
#include<iostream>
using namespace std;
#include<string>

//定义英雄的结构体
struct Hero
{
	string name;   //英雄姓名
	int age;       //英雄年龄
	string sex;    //英雄性别
};

//定义输出英雄列表的函数
void printHero(struct Hero HeroArray[], int len)    
{
	for (int i = 0; i < len; i++)
	{
		cout << "第" << i + 1 << "位英雄是：" << HeroArray[i].name << " 年龄：" << HeroArray[i].age << " 性别：" << HeroArray[i].sex << endl;
	}

}

//定义冒泡排序
//此处数组名就是地址，因此为地址传递，可以修改数组内部的数据
void bubblesort(struct Hero HeroArray[], int len)   //From Task41
{
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len - i - 1; j++) 
		{
			//如果j下标元素的年龄大于j+1下标的年龄，交换两个元素
			if (HeroArray[j].age > HeroArray[j + 1].age)  
			{
				struct Hero temphero = HeroArray[j];   //定义临时Hero用于交换
				HeroArray[j] = HeroArray[j + 1];
				HeroArray[j + 1] = temphero;
			}
		}
	}
}

int main()
{
	//创建数组存放5名英雄（写在main函数里面）
	struct Hero HeroArray[5]
	{
		{"刘备",23,"男"},
		{"关羽",22,"男"},
		{"张飞",20,"男"},
		{"赵云",21,"男"},
		{"貂蝉",19,"女"}
	};
	
	//计算数组长度
	int len = sizeof(HeroArray) / sizeof(HeroArray[0]);

	//输出排序前英雄列表
	cout << "排序前英雄列表为：" << endl;
	printHero(HeroArray, len);

	//冒泡排序
	bubblesort(HeroArray, len);

	//输出排序后英雄列表
	cout << "排序后英雄列表为：" << endl;
	printHero(HeroArray, len);

	cout << "貂蝉战四郎，四郎皆扶墙" << endl;

	system("pause");
	return 0;
}
*/













