#include<iostream>
using namespace std;
int main()
{
	int n,u,d;
	while(~scanf("%d %d %d",&n,&u,&d))
	{
	int t=0;
	if(n==0) continue;
	while(n>0)
	{
		t++;
		n-=u;
		if(n<=0) break;
		n+=d;
		t++;
	}
	cout<<t<<endl;
	}
	return 0;
} 