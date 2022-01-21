#include<iostream>
#include<cstring>
#include<queue>
using namespace std;
#define N 1000
char map[N][N];
bool vis[N][N];
int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};
int n,m;
int en;  //能量
int stx,sty,lasx,lasy,sum=0; //起点和终点坐标
struct node{
    int x;
    int y;
    int time;
};
bool judge(int x,int y)
{
    if(x<0||y<0||x>=n||y>=m||vis[x][y])
    return false;
    else return true;
}
int bfs(int stax,int stay)
{
    queue<node> q;
    node u;
    u.x = stax;
    u.y = stay;
    u.time = 0;
    q.push(u);
    vis[stax][stay]=true;
    while(!q.empty())
    {
        int x = q.front().x;
        int y = q.front().y;
        int t = q.front().time;
        if(x==lasx&&y==lasy) return t;
        q.pop();
        for(int i=0;i<4;i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(judge(nx,ny))
            {
                vis[nx][ny]=true;
                node newnode;
                newnode.x = nx;
                newnode.y = ny;
                newnode.time = t+1;
                q.push(newnode);
            }
        }
    }
    return -1;
}
int main()
{
    cin>>n>>m>>en;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        {
            cin>>map[i][j];
            if(map[i][j]=='S')
            {
                stx = i;
                sty = j;
            }
        }
    for(int k=1;k<=en;k++)
    {
        memset(vis,0,sizeof(vis));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(map[i][j]==k+'0')
                {
                    lasx = i;
                    lasy = j;
                }
                if(map[i][j]=='X') vis[i][j]=true;
            }
        }
        sum+=bfs(stx,sty);
        stx = lasx;
        sty = lasy;  
    }
    cout<<sum<<endl;
    return 0;
}