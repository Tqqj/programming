#include<iostream>
using namespace std;
const int N=1e6+10;
int q[N],n,i,j;
void bubble_sort(int q[],int n)
{
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(q[j]>q[j+1]) swap(q[j],q[j+1]);
        }
    }
}
int main()
{
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&q[i]);
    bubble_sort(q,n);
    for(i=0;i<n;i++) printf("%d ",q[i]);
    return 0;
}