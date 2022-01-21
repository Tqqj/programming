#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;


const int maxn = 105;
char mapp[maxn][maxn];
int idx[maxn][maxn];

int m,n;
//const int maxn = 105;
const int mc[4] = {0,0,1,-1};
const int ml[4] = {-1,1,0,0};

void bfs(int c,int l,int id)
{
    if(c < 0 || l < 0 || c >= m || l >= n) return;       //检查越界；
    if(mapp[c][l] != '@' || idx[c][l] != 0) return;      //不是‘@’或是已经访问过的格子；
    idx[c][l] = id;
    for(int i = 0; i < 4; i++)    //以mapp[c][l]为中心向周围八个格子拓展；
    {
        int nc,nl;
        nc = c + mc[i];
        nl = l + ml[i];
        bfs(nc,nl,id);
    }
}

int main()
{
    //char mapp[maxn][maxn];
    //int idx[maxn][maxn];
    memset(idx,0,sizeof(idx));
    while(scanf("%d%d",&m,&n) == 2 && m && n)
    {
        for(int i = 0; i < m; i++)
            scanf("%s",mapp[i]);
        int cnt = 0;
        for(int i = 0; i < m; i++)
            for(int j = 0; j < n; j++)
            {
                if(mapp[i][j] == '@' && idx[i][j] == 0)bfs(i,j,++cnt);
            }
        printf("%d\n",cnt);
    }
    return 0;
}