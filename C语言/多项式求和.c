#include<stdio.h>
int main()
{
    int num,n;int flag=1;
    float sum=0;
    while(scanf("%d",&num)!=EOF)
    {
        for(int j=0;j<num;j++)
        {
            scanf("%d",&n);
            for(int i=1;i<=n; i++)
            {
                sum=sum+flag*1.0/i;
                flag=flag*(-1);
            }
            printf("%.2f\n",sum);
            sum=0;flag=1;
        }
    }
}