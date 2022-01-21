#include<stdio.h>
int main()
{
	int m,n,l,q,d,t=0;int a=0;
while(scanf("%d%d",&m,&n)!=EOF)
		{
			if(m>n)
        {
            l = m;
            m = n;
            n = l;
        }
		for(int i=m;i<=n;i++)
		{
				q=i;
			while(q!=0)
			{
				d=q%10;
				t+=d*d*d;
				q/=10;
			}
			if(t==i)
				{
					a++;
					if(a==1)
					printf("%d",i);
					else
					printf(" %d",i);
				}
			
			t=0;
		}
			if(a==0)
			printf("no");
			a=0;
			printf("\n");
		}
	return 0;
}