#include<stdio.h>
int main()
{
	char a[1000];
	int num,j=0,k=0;
	scanf("%d",&num);
	getchar();
	gets(a);
	for(int i=0;i<num;i++)
	{
			if(a[i]=='S')
			{
				if(a[i+1]=='F')
				{
					j++;
				}	
			}
			if(a[i]=='F')
			{
				if(a[i+1]=='S')
				{
					k++;
				}	
			}
	}
	if(j>k)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}
} 