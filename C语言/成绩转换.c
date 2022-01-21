#include"stdio.h"
int main()
{
	int a;
	while(scanf("%d",&a)!=EOF)
	{
		if(a<0||a>100)
		{
			printf("Score is error!\n");
		}
		else if(a>=90)
		{
			printf("A\n");
		}
		else if(a>=80)
		{
			printf("B\n");
		}
		else if(a>=70)
		{
			printf("C\n");
		}
		else if(a>=60)
		{
			printf("D\n");
		}
		else
		{
			printf("E\n");
		}
	}

}