#include<stdio.h>
int main()
{
	int i,j,num,a,sum=0,g=0;
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		scanf("%d",&a);
		for(j=1;j<10000;j++)
		{
			sum += j*j*j; 
			if(sum>=a)
			{
				printf("%d\n",j);
				g++;
			}
			if(g>0)
			{
				break;
			}
			
		}
		sum=0;g=0;
	}
	
}