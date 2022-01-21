#include<stdio.h>
#include<string.h>
int main()
{
    int n,t,i,l;
    char a[10000];
    while(scanf("%d",&n)!=EOF)
    { 
        getchar();
        while(n--)
        {
            t=0;
            gets(a);
            l = strlen(a);
            for(i=0;i<l;i++)
            {
                if(a[i]<0)
                t++;
            }
            printf("%d\n",t/2);
        }
    }
    return 0;
}