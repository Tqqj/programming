#include<stdio.h>
int main()
{
    int n,m,i,j,k,x,g;
    int a[100];
    while(scanf("%d %d",&n,&m)!=EOF)
    {
        if(n==0&&m==0)
        {
            continue;
        }
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        a[n] = m;
        for(j=0;j<n;j++)
        {
            for(k=0;k<n-j;k++)
            {
                if(a[k]>a[k+1])
                {
                    x = a[k];
                    a[k] = a[k+1];
                    a[k+1] = x;
                }
            }
        }
        for(g=0;g<=n;g++)
        {
            printf("%d%c",a[g],g!=n?' ':'\n');
        }
    }
    return 0;
}