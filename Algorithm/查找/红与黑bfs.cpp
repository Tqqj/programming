#include<iostream>
#include<queue>
#define N 30
using namespace std;
char map[N][N];
struct node{
    int x;
    int y;
};
int m,n;
int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};
bool judge(int col,int row){  //判断小人的移动是否合法
    if(col<0||row<0||row>=n||col>=m||map[col][row]!='.') return false;
    else return true;
}
int bfs(int xx,int yy){
    queue<node> q;
    node u;
    u.x = xx;
    u.y = yy;
    q.push(u);
    map[xx][yy]='#';
    int cou=0;
    while(!q.empty())
    {
        int x = q.front().x;
        int y = q.front().y;
        q.pop();
        cou++;
        for(int i=0;i<4;i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(judge(nx,ny)){
                node bean;
                bean.x = nx;
                bean.y = ny;
                q.push(bean);
                map[nx][ny]='#';
            }
        }
    }
    return cou;
}
int main()
{
    while(cin>>n>>m,n||m)
    {
        int xx,yy;
        for(int i=0;i<m;i++)  //注意行和是反过来的
            for(int j=0;j<n;j++){
                cin>>map[i][j];  //绘制地图
                if(map[i][j]=='@'){ //找到小人儿站的位置坐标
                    xx = i;
                    yy = j;
                }
            }
        cout<<bfs(xx,yy)<<endl;
    }
    return 0;
}