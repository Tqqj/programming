#include<iostream>
using namespace std;
int main()
{
    string a;
    while(getline(cin,a))
    {
        //getline()返回时丢弃换行符，不会读取换行符
        cout<<a<<endl;
        //一次读取一行，直到文件结束
    }
    return 0;
}