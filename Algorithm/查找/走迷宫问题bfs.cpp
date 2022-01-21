#include<iostream>
#include<queue>
using namespace std;
const int N=1000;
struct node{
    int x;
    int y;
    int step;  //步数
};
int map[N][N];
bool vis[N][N];
int stx,sty,lax,lay;
int bfs(int stx,int sty)
{
    queue<node> q;
    node u; //起点节点
    u.x=stx;
    u.y=sty;
    u.step=0;
    vis[stx][sty]=true;
    int dx[4]={-1,0,1,0};
    int dy[4]={0,1,0,-1};
    q.push(u);//将起点节点推入队列
    while(!q.empty())
    {
        int x = q.front().x;
        int y = q.front().y;
        int step = q.front().step;
        if(x==lax&&y==lay){
            return step;  //若到达迷宫终点，返回步数
        }
        for(int i=0;i<4;i++){
            int tx = x + dx[i];
            int ty = y + dy[i];
            if(!vis[tx][ty]&&map[tx][ty]==0){
                node newnode;
                newnode.x=tx;
                newnode.y=ty;
                newnode.step=step+1; //每找到一个符合条件的坐标，步数加一
                q.push(newnode);  //将新节点存入队列
                vis[tx][ty]=true;  //标记此坐标已被访问过
            }
        }
        q.pop();  //不断将队顶的元素推出，直到队列为空
    }
    return -1;//若不存在通路，则返回-1

}
int main()
{
    int n,m;
    cin>>n>>m;  //绘制n*m的地图
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>map[n][m];  //绘制地图
    cin>>stx>>sty>>lax>>lay;  //输入起点(x,y)和终点(x,y)
    cout<<bfs(stx,sty)<<endl; //打印最终结果
    return 0;
}