#include<stdio.h>
int main()
{
    int num,i,sum=0;
        int a[100];
        int max,min;
        double avg,t;
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
 
		sum += a[i];
        }
        t = sum-max-min;
        avg=t/(num-2);
        printf("%.2lf\n",avg);
        sum =0;
    }
}