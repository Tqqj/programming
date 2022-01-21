#include<stdio.h>
int main()
{
    int m,n,g,s,b,k,l;
    while(scanf("%d %d",&m,&n)!=EOF)
    {
        if(m>n)
        {
            l = m;
            m = n;
            n = l;
        }
        for(int i=m;i<=n;i++)
        {
            int t = i;
            g = t%10;
            s = t/10%10;
            b = t/100;
            t=g*g*g+s*s*s+b*b*b;
            if(i==t)
            {
            k++;
            if(k==1)
            printf("%d",i);
            else
            printf(" %d",i);
            }
            t = 0;
        }
        if(k==0)
        printf("no");
        k = 0;
        printf("\n");
    }

}