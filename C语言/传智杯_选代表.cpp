#include<iostream>
using namespace std;
bool vis[105];
int main()
{
    int n,k,i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>k;
        if(!vis[k])
        {
            cout<<k<<' ';
            vis[k]=1;
        }
    }

    return 0;
}