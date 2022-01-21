#include<iostream>
#define N 1010
using namespace std;
//全局变量声明定义时自动初始化为0
int v[N],w[N]; //n[i],v[i]表示第i个物体的体积和价值
int dp[N][N]; //表示前i个物品体积刚好为j时的最大价值
int main()
{
    int n,m;
    int i,j;
    cin>>n>>m; //n表示物品的数量,m表示背包的体积
    for(i=1;i<=n;i++) cin>>v[i]>>w[i];  //读入数据
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            dp[i][j]=dp[i-1][j]; //不断将上一层的状态转移到下一层去
            if(j>=v[i]) //要符合条件，j必须大于当前物品体积
                dp[i][j]=max(dp[i][j],dp[i-1][j-v[i]]+w[i]); 
                /*表示前i个物品体积刚好为j时的最大价值
                此时二维数组的每一层的第一个元素一直为0，用来储存第i个物品的价值；
                max用来储存满足背包容量所有物品的价值总和，一直寻找到最大价值
                */
        }
    }
    int ans=0;
    for(j=1;j<=m;j++){
        ans=max(ans,dp[n][j]); //一直遍历最后一层状态数组，直到找到最大值
    }
    cout<<ans<<endl;
    return 0;
}
