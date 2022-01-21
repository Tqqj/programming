#include<iostream>
using namespace std;
int main()
{
    int choice;
    int coffee=7,milk=6,juice=3,black_tea=3,green_tea=3,milk_tea=8;
    cout<<"\t**************************"<<endl;
    cout<<"\t***欢迎光临小鸡奶茶店***"<<endl;
    cout<<"\t1.Coffee  2.Milk  3.Juice"<<endl;
    cout<<"\t4.Black Tea   5.Green Tea"<<endl;
    cout<<"\t6.Milk Tea"<<endl;
    cout<<"\t祝您的每一天都有好心情！😇"<<endl;
    cout<<"\t**************************"<<endl;
    cout<<"请输入您的选择："<<endl;
    cin>>choice;
    if(choice==1)
    cout<<"您需要支付"<<coffee<<"元。";
    if(choice==2)
    cout<<"您需要支付"<<milk<<"元。";
    if(choice==3)
    cout<<"您需要支付"<<juice<<"元。";
    if(choice==4)
    cout<<"您需要支付"<<black_tea<<"元。";
    if(choice==5)
    cout<<"您需要支付"<<green_tea<<"元。";
    if(choice==6)
    cout<<"您需要支付"<<milk_tea<<"元。";
    return 0;
}