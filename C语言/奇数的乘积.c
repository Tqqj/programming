#include<stdio.h>
int main()
{
    int num,sum=1,a;
    while(scanf("%d",&num) != EOF)
    {
        for(int i=1;i<=num;i++)
        {
            scanf("%d",&a);
            if(a%2==1)
        {
            sum *= a;
        }
        }
        printf("%d\n",sum);
        sum = 1;
    }
    return 0;

 }