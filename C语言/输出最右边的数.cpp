#include<iostream>
using namespace std;
typedef long long ll;
ll qPow(ll a,ll n)
{
    ll ans=1;
    while(n)
    {
        if(n&1) ans=(ans*a)%10;
        a=(a*a)%10;
        n>>=1;
    }
    return ans;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,ans;
        cin>>n;
        ans=qPow(n,n);
        cout<<ans<<endl;
    }
}