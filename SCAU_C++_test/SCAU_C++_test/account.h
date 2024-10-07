#pragma once
//编写：类定义头文件account.h
#ifndef ACCOUNT_H_
#define ACCOUNT_H_
#include"date.h"
class Account                       //基类
{
protected:
    int id;     //定义帐号（整型）
    double balance;     //定义余额
    static double total;      //定义总额
public:
    Account(int id, double balance);
    const int getId() { return id; }
    const double getBalance() { return balance; }
    static void getTotal();
    virtual void deposit(Date date, double amount) = 0;
    virtual void withdraw(Date date, double amount) = 0;
    virtual void settle(Date date) = 0;
    virtual void show();
};
class SavingsAccount :public Account     //储蓄卡类
{
protected:
    double rate;    //定义利率
    Date lastDate;    //上次变更余额的日期
    double accumulation = 0;   //余额按日累加之和
    const double accumulate(Date date);    //获得到指定日期为止的存款金额按日累积值
public:
    SavingsAccount(int year, int month, int day, int id, double balance, double rate);//构造函数和定义
    void deposit(Date date, double amount);     //存入现金，date为日期，amount为金额
    void withdraw(Date date, double amount);    //取出现金，date为日期，amount为金额
    void settle(Date date);       //结算利息，1月1日调用函数
    const double getRate() { return rate; }     //定义返回 Rate
    void show();
};
class CreditAccount :public Account  //信用卡类
{
protected:
    double credit;      //额度
    double rate;        //利率
    double fee;         //年费
    Date lastDate;
public:
    CreditAccount(int year, int month, int day, int id, double balance, double credit, double rate, double fee);
    double getAvailableCredit() { return credit; }     //可用额度
    void deposit(Date date, double amount);
    void withdraw(Date date, double amount);
    double getDebt(Date date);                       //欠款额度
    void settle(Date date);
    void show();
};
#endif // ACCOUNT_H_INCLUDED
