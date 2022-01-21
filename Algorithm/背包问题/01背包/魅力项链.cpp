#include<iostream>
using namespace std;
const int N=100000;
int w[N],d[N];
int dp[N];
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++) cin>>w[i]>>d[i];
    for(int i=1;i<=n;i++)
        for(int j=m;j>=w[i];j--)
                dp[j]=max(dp[j],dp[j-w[i]]+d[i]); //滚动数组
    int ans=0;
    for(int j=1;j<=m;j++)
        ans=max(ans,dp[j]);
    cout<<ans<<endl;
    return 0;
}