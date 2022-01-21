#include<iostream>
#include<algorithm>
using namespace std;
int cmp(int a,int b)
{
    return a>b;
}
int main()
{
    int q[5],i;
    for(i=0;i<5;i++) scanf("%d",&q[i]);
    sort(q,q+5,cmp);
    for(i=0;i<5;i++) printf("%d ",q[i]);
    return 0;
}