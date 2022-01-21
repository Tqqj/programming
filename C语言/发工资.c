#include <stdio.h>
int main()
{
	int money[]={100,50,10,5,2,1};
    int s,w=0,n,sum=0;
	while(scanf("%d",&n)!=EOF)
	{
		if(n==0)
			continue;
		int sum=0,num=0;
		for(int i=0;i<n;i++)
		{ 
			num=0;
			scanf("%d",&s);
			while(s)
				{
					w=s/money[num];
					sum+=s/money[num];
					s=s-w*money[num];
					num++;
				}
		}
		printf("%d\n",sum);	
	}
	return 0;
}