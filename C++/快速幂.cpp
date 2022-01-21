#include<iostream>
using namespace std;
typedef long long ll;
ll qpow(int a,int b)
{
    ll ans=1;
    while(b)
    {
        if(b%2) ans*=a;  // b%2 与 b&1 都可以
        a*=a;
        b>>=1; // 相当于b/=2;
    }
    return ans;
}
int main()
{
    ll m,n;
    cin>>m>>n;
    cout<<qpow(m,n)<<endl;
    return 0;
}