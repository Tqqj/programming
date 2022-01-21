#include<stdio.h>
int main()
{
	int sum = 0,i,num;
	double avg,b;
	int a[10];
	int max,min;
 while(scanf("%d",&num)!=EOF)
{	
    for(i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
		if(i==0)
		{
			max = a[0];
			min = a[0];
		}
		if(max<a[i])
			max = a[i];
		if(min>a[i])
			min = a[i];
 
		sum = sum+a[i];
    }

}
	b = sum-max-min;
	avg = b/(num-2);
	printf("平均分为：%.2lf\n",avg);
}