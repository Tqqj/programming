#include<stdio.h>
int main()
{
    int m,n,a,b,i;
while (scanf("%d %d",&m,&n)!=EOF)
{
    a = b = 0;
    if(m>n)     //m<=n
    {
        i = m;
        m = n;
        n = i;
    }
    for(i=m;i<=n;i++)
    {
        if(i%2==0)
        {
            a += i*i;
        }
        else
        {
            b +=  i*i*i;
        }
    }
    printf("%d %d\n",a,b);
}
}
