#include<stdio.h>
int main()
{
	int n,m,a[101],i,s,t,k,p,s1;
		float b[101];int j;
	while(~scanf("%d%d",&n,&m))
	{
		s=0;t=2;j=0;k=0;s1=0;
		for(i=1;i<=n;i++)
		{
			s+=t;
			t+=2;
			if(i%m==0)
			{b[j++]=s*1.0/m;s=0;k++;}
			if(n-k*m<m)
			{for(p=1;p<=n-k*m;k++)
			s1+=t;
				b[j]=s1*1.0/(n-k*m);
			}
		}
		k=j;
		for(j=0;j<k-1;j++)
		printf("%.f ",b[j]);
		printf("%.f\n",b[j]);
	}
	return 0;
}