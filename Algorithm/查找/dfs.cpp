#include<iostream>
using namespace std;
#define N 5
int map[N][N]={
    {0,1,0,0,0},
    {0,1,1,1,0},
    {1,0,1,0,1},
    {0,0,0,0,1},
    {1,0,1,1,0}
};
int visited[N+1]={0};
void dfs(int start)
{
    visited[start]=1;
    for(int i=1;i<=N;i++)
    {
        if(!visited[i]&&map[start-1][i-1]==1){
            dfs(i);
        }
    }
    cout<<start<<" ";
}
int main()
{
    for(int i=1;i<=N;i++)
    {
        if(visited[i]==1)
        continue;
        dfs(i);
    }
    return 0;
}