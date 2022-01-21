#include<iostream>
#include<queue>
using namespace std;
const int N=1000;
bool vis[N][N];
struct node{
int x,y,step;
}za;
int n,m;
int a[N],b[N];
int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};
bool judge(int x,int y)
{
    if(x<0||y<0||x>=n||y>=n||vis[x][y])
        return false;
    else return true;
}
int bfs(int sa,int sb,int sa1,int sb1)
{
    queue<node> q;
    node u;
    u.x=sa;
    u.y=sb;
    u.step=0;
    q.push(u);
    vis[sa1][sb1]=false;
    while(!q.empty())
    {
        int xx=q.front().x;
        int yy=q.front().y;
        int step=q.front().step;
        q.pop();
        vis[xx][yy]=true;
        if(xx==sa1&&yy==sb1){
            return step;
        }
        for(int i=0;i<4;i++)
        {
            int px = xx + dx[i];
            int py = yy + dy[i];
            if(judge(px,py)){
                node newnode;
                newnode.x = px;
                newnode.y = py;
                newnode.step=step+1;
                vis[px][py]=true;
                q.push(newnode);
            }
        }
        
    }
    return -1;
}
int main()
{
    cin>>n>>m;
    while(m--){
    cin>>za.x>>za.y;
        vis[za.x][za.y]=true;
    }
    int t;
    cin>>t;
       for(int i=0;i<t*2;i+=2){
           cin>>a[i]>>a[i+1];
           cin>>b[i]>>b[i+1];
           vis[a[i]][a[i+1]]=vis[b[i]][b[i+1]]=true;
       }
    for(int j=0;j<t*2;j+=2){
        cout<<bfs(a[j],a[j+1],b[j],b[j+1])<<endl;
    }
}