#include<stdio.h>
int main()
{
    long long f[1000],n;
    f[0]=0;
    f[1]=1;
    scanf("%lld",&n);
    for(int i=2;i<=n;i++)
    {
        f[i]=f[i-1]+f[i-2];
    }
    printf("%lld\n",f[n-1]);
    return 0;
}