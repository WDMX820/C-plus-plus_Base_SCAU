//编写：类实现文件account.cpp
#include<iostream>
#include "account.h"
using namespace std;
Account::Account(int Id, double Balance)     //Account基类成员函数
{
    id = Id;   //id赋值
    balance = Balance;    //balance赋值
}
void Account::show()
{
    cout << "账号:" << getId() << "  余额:" << getBalance() << "元" << endl;
}
void Account::getTotal()
{
    cout << "各账户总额:" << total << "元" << endl;
}
//SavingsAccount储蓄卡类成员函数
SavingsAccount::SavingsAccount(int year, int month, int day, int id, double balance, double Rate) :Account(id, balance), lastDate(year, month, day)
{
    rate = Rate;
    cout << year << "/" << month << "/" << day << "\t";
    cout << "账号" << id << "创建成功!" << endl;    //判断是否创建成功
}
const double SavingsAccount::accumulate(Date date)
{
    return (lastDate - date) * balance;
}
void SavingsAccount::deposit(Date date, double amount) //存入现金，date为日期，amount为金额
{
    accumulation += accumulate(date); //调用accumulate函数更新账户信息
    balance += amount;
    lastDate = date;  //存款后更改余额和lastdate
    total += amount;
    cout << date.getYear() << "/" << date.getMonth() << "/" << date.getDay() << "\t";
    cout << id << "\t存入:" << amount << "元" << "\t余额:" << balance << "元" << endl;
}
void SavingsAccount::withdraw(Date date, double amount)
{
    accumulation += accumulate(date);
    balance -= amount;
    lastDate = date;
    total -= amount;
    cout << date.getYear() << "/" << date.getMonth() << "/" << date.getDay() << "\t";
    cout << id << "\t取出:" << amount << "元" << "\t余额:" << balance << "元" << endl;
}
void SavingsAccount::settle(Date date)  //结算利息，每年1月1日调用一次该函数
{
    double settle = 0;
    if (date.getYear() > lastDate.getYear())           //储蓄卡一年结算一次利息
    {
        for (int i = 1; i <= date.getYear() - lastDate.getYear(); i++)       //
        {
            accumulation += accumulate(date);
            settle = accumulation / 356 * rate;
        }
    }
    cout << date.getYear() << "/" << date.getMonth() << "/" << date.getDay() << "\t";
    cout << id << "\t结算利息:" << settle << "元" << endl;
    deposit(date, settle);
}
void SavingsAccount::show()
{
    Account::show();
}
//CreditAccount信用卡类
CreditAccount::CreditAccount(int year, int month, int day, int id, double balance, double Credit, double Rate, double Fee) : Account(id, balance), lastDate(year, month, day)
{
    credit = Credit;
    fee = Fee;
    rate = Rate;
    cout << year << "/" << month << "/" << day << "\t";
    cout << "账号" << id << "创建成功!" << endl;
}
double CreditAccount::getDebt(Date date)
{
    settle(date);
    return balance;
}
void CreditAccount::deposit(Date date, double amount)
{
    settle(date);
    if (credit <= 0 || amount > credit)
    {
        date.show();
        cout << "\t" << id << "\t信用卡可用额度不足!" << endl;  //判断信用卡额度是否可用
    }
    else
    {
        balance -= amount;
        credit -= amount;
        date.show();
        cout << id << "\t信用卡借款:" << amount << "元" << "\t还可用额度:" << credit << "元" << endl;
        total -= amount;
    }
}
void CreditAccount::withdraw(Date date, double amount)
{
    settle(date);
    balance += amount;
    if ((credit + amount) <= 10000)
    {
        credit = credit + amount;
    }
    else
    {
        credit = 10000;
    }
    total += amount;
    date.show();
    cout << id << "\t信用卡还款:" << amount << "元" << "\t还可用额度:" << credit << "元" << endl;
}
void CreditAccount::settle(Date date)
{
    double settle = 0;
    if ((date.getMonth() < lastDate.getMonth()) || (date.getYear() > lastDate.getYear()))
    {
        for (int i = 1; i <= date.getYear() - lastDate.getYear(); i++)
        {
            settle += fee;                    //年费
        }
    }
    if (date.getDay() == 1 || date.getMonth() > lastDate.getMonth() || date.getYear() > lastDate.getYear())
    {
        if (date.getYear() == lastDate.getYear())
        {
            for (int j = 1; j <= (date.getMonth() - lastDate.getMonth()); j++)
            {
                for (int m = 1; m <= lastDate - date; m++)
                {
                    settle -= balance * rate;
                }
            }
        }
        else
        {
            for (int j = 1; j <= (date.getMonth() - lastDate.getMonth()) + 12; j++)
            {
                for (int m = 1; m <= lastDate - date; m++)
                {
                    settle -= balance * rate;
                }
            }
        }
    }
    else
    {
        settle -= 0;
    }
    balance -= settle;
    lastDate = date;
    total -= settle;
}
void CreditAccount::show()
{
    Account::show();
}
