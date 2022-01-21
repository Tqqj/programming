#include<stdio.h>
int main()
{
    long long n,m,i,k;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&m);
        m = m%100000;
        m = m+600000;
        printf("%lld\n",m);
        m=0;
    }
    return 0;
}