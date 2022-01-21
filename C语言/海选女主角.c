#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x,y,i,j,*p,max=0;
    int a[100][100];
    p = (int *)a;
    while(scanf("%d %d",&x,&y)!=EOF)
    {
        for(i=0;i<x;i++)
        {
            for(j=0;j<y;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }

        for(i=0;i<i*j;i++)
        {
            if(abs(p[i])>abs(p[i+1]))
            {
                max = p[i];
            }
        }
        for(i=0;i<x;i++)
        {
            for(j=0;j<y;j++)
            {
                if(a[i][j]==max)
                {
                    printf("%d %d %d\n",i,j,max);
                }
            }
        }

        
    }
    return 0;
}