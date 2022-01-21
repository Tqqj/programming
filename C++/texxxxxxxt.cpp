#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a,b,c;
    cin>>a>>b;
    for(int i=0;i<a.size();i++)
    {
        for(char ch='a';ch<='z';ch++)
        {
            if(ch>=a[i]&&ch<=b[i])
            {
                c[i]=ch;
                break;
            }
        }
    }
    for(int i=0;i<a.size();i++)
    {
        cout<<c[i];
    }
    
    return 0;
}