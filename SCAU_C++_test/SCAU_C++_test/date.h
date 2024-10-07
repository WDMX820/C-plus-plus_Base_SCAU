#pragma once
//编写：类定义头文件date.h
#ifndef DATE_H_INCLUDED
#define DATE_H_INCLUDED
class  Date
{
    int  year, month, day;   //定义年、月、日
    int  totalDays;   //该日期是从公元元年1月1日开始的第几天
public:
    Date(int year, int month, int day);
    int  getYear() const { return year; }      //定义返回常量 year
    int  getMonth() const { return month; }    //定义返回常量 month
    int  getDay() const { return day; }        //定义返回常量 day
    void  show() const;			//输出当前日期
    bool  isLeapYear(int year) const;	//判断当年是否为闰年
    int operator-(const Date& date) const { return date.totalDays - totalDays; }      //运算符-重载
};
#endif // DATE_H_INCLUDED
