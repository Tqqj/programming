#include<stdio.h>
int main()
{
    int n,m,i,j,k,l=0,s=0;
    int a[1000],b[1000];
    while(~scanf("%d %d",&n,&m))
{
    if(n==0&&m==0)
    continue;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<m;j++)
    {
        scanf("%d",&b[j]);
    }
    for(k=0;k<n;k++)
    {
        for(i=0;i<m;i++)
        {
            if(a[k]!=b[i])
            {
                l++;
                if(l==m)
                {
                    s=k;
                    printf("%d ",a[s]);
                }
            }
            s=0;l=0;
        }
    }
}
    return 0;
}