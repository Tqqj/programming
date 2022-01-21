#include<iostream>
#include<queue>
#include<cstring>
using namespace std;
#define N 100
char lw[N][N];
int dp[N][N];
const int dx[]={0,1,0,-1};
const int dy[]={1,0,-1,0};
int n,m;
struct node{
    int x,y;
};
bool judge(int xx,int yy,char target)
{
    if(xx<0||yy<0||xx>=n||yy>=m||lw[xx][yy]!=target||dp[xx][yy])
    return false;
    else return true;
}
void bfs(int stax,int stay,char target)
{
    queue<node> q;
    node u;
    u.x=stax;
    u.y=stay;
    q.push(u);
    dp[stax][stay]=true;
    while(!q.empty())
    {
        int x = q.front().x;
        int y = q.front().y;
        q.pop();
        for(int i=0;i<4;i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(judge(nx,ny,target)){
                node bean;
                bean.x = nx;
                bean.y = ny;
                dp[nx][ny]=true;
                q.push(bean);
            }
        }
    }
}
int main()
{
    while(cin>>n>>m,n||m){
    int ans=0;
    memset(dp,0,sizeof (dp)); //初始化标记数组dp
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>lw[i][j];  //绘制地图
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        {
            if(lw[i][j]=='@'&&!dp[i][j])
            {
                ans++;
                bfs(i,j,'@');
            }
            if(lw[i][j]=='#'&&!dp[i][j])
            {
                ans++;
                bfs(i,j,'#');
            }
            if(lw[i][j]=='*'&&!dp[i][j])
            {
                ans++;
                bfs(i,j,'*');
            }
        }
    cout<<ans<<endl;
    }
    return 0;
}