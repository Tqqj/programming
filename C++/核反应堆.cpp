#include<iostream>
using namespace std;
int main()
{
	int n,i;
	while(scanf("%d",&n)!=EOF)
	{
		if(n==-1) break;
		long long int h[100010],l[100010];
        h[0]=3; h[1]=11;
        l[0]=1; l[1]=4;
		for(i=1;i<n;i++)
		{
			h[i]=3*h[i-1]+2*l[i-1];  //状态转移方程
            l[i]=h[i-1]+l[i-1];
		}
		if(n!=0) cout<<h[n-1]<<", "<<l[n-1]<<endl;
        else cout<<"1, 0"<<endl;
	}
	 
	return 0;
}