#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int q[100100];
int i,n,m;
int main()
{
    int t,mid,k=0;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++) scanf("%d",&q[i]);
    sort(q,q+n);
while(m--)
{
    scanf("%d",&t);
    int l=0,r=n-1;
    while(l<r)
    {
    mid=(l+r)>>1;
    if(q[mid]>=t) r=mid;
    else l=mid+1;
    }
        if(q[l]==t)
        {
            while(q[l++]==t)
            k++;
        }
    cout<<k<<endl;
    k=0;
}
	return 0;
}