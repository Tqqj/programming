#include<stdio.h>
int main()
{
    int i,j,k,num,a,b;
    int n,m,sum,sum2;
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        scanf("%d %d",&a,&b);
        if(a>=100||b>=100)
        {
            n=a%100;
            m=b%100;
            sum=n+m;
        }
        sum2=a+b;
        if(sum>=100||sum2>=100)
        {
            if(a>=100||b>=100)
            printf("%d\n",sum%100);
            else
            printf("%d\n",sum2%100);
        }else
        {
            if(a>=100||b>=100)
            printf("%d\n",sum);
            else
            printf("%d\n",sum2);
        }
        sum=sum2=0;
    }
    return 0;
}