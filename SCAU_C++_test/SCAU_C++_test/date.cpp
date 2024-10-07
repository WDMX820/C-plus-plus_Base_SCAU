//编写：类实现文件date.cpp
#include<iostream>
#include "date.h"
using namespace std;
Date::Date(int Year, int Month, int Day)
{
    year = Year;     //年赋值
    month = Month;   //月赋值
    day = Day;       //日赋值
    int Days = 0;
    for (int i = 0; i < year; i++)
    {
        if (isLeapYear(i) == true)
            Days = Days + 366;   //闰年一年366天
        else
            Days = Days + 365;   //非闰年一年365天
    }
    switch (month) {
    case 1:Days += 0; break;      //将每月1日到1月1日天数表示出来
    case 2:Days += 31; break;     // 一月天数31天
    case 3:Days += 59; break;     // 二月天数28天
    case 4:Days += 90; break;     // 三月天数31天
    case 5:Days += 120; break;    // 四月天数30天
    case 6:Days += 151; break;    // 五月天数31天
    case 7:Days += 181; break;    // 六月天数30天
    case 8:Days += 212; break;    // 七月天数31天
    case 9:Days += 243; break;    // 八月天数31天
    case 10:Days += 273; break;   // 九月天数30天
    case 11:Days += 304; break;   // 十月天数31天
    case 12:Days += 334; break;   // 十一月天数30天
    default:cout << "month error!" << endl;
    }
    totalDays = Days + day;
}
void  Date::show() const
{
    cout << getYear() << "/" << getMonth() << "/" << getDay() << "\t";
}	//输出当前日期
bool  Date::isLeapYear(int year) const
{
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        return true;
    else
        return false;
}	//判断当年是否为闰年
