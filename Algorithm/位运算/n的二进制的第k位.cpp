#include<iostream>
using namespace std;
int main()
{
    int n=10;
    for(int k=3;k>=0;k--) cout<<(n>>k&1);
    cout<<endl;
    for(int k=3;k>=0;k--) cout<<((n&(-n+1))>>k&1);//lowbit(x)实现原理
    return 0;
}