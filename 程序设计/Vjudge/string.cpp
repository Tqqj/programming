#include<iostream>
using namespace std;
int main()
{
    string a,b;
    a=a.erase(a.begin(),a.end());
    b=a.substr(a.begin(),a.begin()+2);
    if(a==b)
    return 0;
}