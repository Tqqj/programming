#include<iostream>
#include<string>
using namespace std;
string addnumber(string a, string b)
{
    int x,y,sum,flag=0;
    if(a.size()<b.size())
    {
        string t = a;
        a = b;
        b = t;
    }
    int l1 = a.size(),l2 = b.size();
    while(l1>0)
    {
        x = a[l1-1]-'0';
        if(l2>0) y = b[l2-1]-'0';
        else y=0;
        sum = x+y+flag;
        if(sum>=10)
        {
            a[l1-1] = '0' + sum%10;
            flag = 1;
        }
        else{
            a[l1-1] = '0' + sum;
            flag = 0;
        }
        l1--;
        l2--;
    }
    if(flag==1) a = "1"+a;
    return a;
}
int main()
{
    string n1,n2;
    cin>>n1;
    while(cin>>n2&&n2!="0")
    n1 = addnumber(n1,n2);
    cout<<n1;
    return 0;
}