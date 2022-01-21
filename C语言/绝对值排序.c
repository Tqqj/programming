#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int n,i,j,k,q,s,x;
    int a[100];
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)
        {
            continue;
        }
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(q=0;q<n-1;q++)
        {
            for(s=0;s<n-1-q;s++)
            {
                if(abs(a[s])>abs(a[s+1]))
                {
                    x = a[s];
                    a[s] = a[s+1];
                    a[s+1] = x;
                }
            }
        }
        for(k=n-1;k>=0;k--)
        {
            printf("%d%c",a[k],k!=0?' ':'\n');
        }
    }
    return 0;
}