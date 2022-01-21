#include<iostream>
using namespace std;
const int N=500;
int dp[N][N];
int main()
{
    int n,r,f;
    cin>>n;
    for(int i=0;i<n;i++)
        for(int j=0;j<=i;j++) cin>>dp[i][j];
    for(int i=n-2;i>=0;i--)
        for(int j=0;j<=i;j++)
        {
            r = dp[i][j] + dp[i+1][j];
            f = dp[i][j] + dp[i+1][j+1];
            dp[i][j] = max(r,f);
        }
    cout<<dp[0][0]<<endl;
    return 0;
}