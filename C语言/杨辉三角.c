#include<stdio.h>
int main()
{
	int a[1000][1000],i,j,num;
	while(scanf("%d",&num)!=EOF)
	{
		for(i=1;i<=num;i++)
		{
			a[i][1]=1;
			a[i][i]=1;
		}
		for(i=3;i<=num;i++)
		{
			for(j=2;j<=num-1;j++)
			{
				a[i][j] = a[i-1][j-1]+a[i-1][j];
			}
		}
		for(i=1;i<=num;i++)
		{
			for(j=1;j<=i;j++)
			{
				printf("%d%c",a[i][j],j!=i?' ':'\n');
			}
		}
		printf("\n");
	}
	return 0;
}