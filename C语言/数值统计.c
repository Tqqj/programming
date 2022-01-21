#include<stdio.h>
int main()
{
    int num,sum1,sum2,sum3;
    double b;
    while(scanf("%d",&num) != EOF)
    {
        sum1=sum2=sum3=0;
        if(num==0)
        {
            continue;
        }
        for(int i=0;i<num;i++)
        {
            scanf("%lf",&b);
            if(b<0)
            {
                sum1++;
            }
            if(b==0)
            {
                sum2++;
            }
            if(b>0)
            {
                sum3++;
            }
        }
    printf("%d %d %d\n",sum1,sum2,sum3);
    }
}