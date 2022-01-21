#include<iostream>
using namespace std;
int main()
{
    int i,j,k,n,cnt=0;
    cin>>n;
    for(i=1;i<=n;i++)
        for(j=i+1;j<=n;j++)
            for(k=j+1;k<=n;k++)
            cnt++;
    cout<<cnt;
    return 0;
}