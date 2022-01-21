#include<iostream>
using namespace std;
void change(int num);
void change(int num)
{
    if(num==0)
    return;
    change(num/2);
    cout<<num%2;
}
int main()
{
    change(100);
    return 0;
}