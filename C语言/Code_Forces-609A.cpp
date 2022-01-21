#include<iostream>
#include<algorithm>
using namespace std;
bool cmp(int a,int b)
{
	return a>b;
}
int main()
{
	int n,m,a[1000],i,j,sum=0,g=0;
	cin>>n>>m;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	sort(a,a+n,cmp);
	for(i=0;i<n;i++)
	{
		sum+=a[i];
		if(sum>=m)
		{
			g = i+1;
		}
		if(g!=0)
		break;
	}
	cout<<g<<endl;
}