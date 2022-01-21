#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,n;
    double s;
    while(scanf("%d %d",&x,&y)!=EOF)
    {
        int k=0,i,s;
        if(x==0&&y==0)
        {
            continue;
        }
        if(x>y)
        {
            x = x ^ y;
            y = x ^ y;
            x = x ^ y;
        }
        for(i=x;i<=y;i++)
        {
            n = i;
            s = n*n+n+41;
            for(int j=2;j<s;j++)
            {
                if(s%j==0)
                {
                    k++;
                }
            }
        }
        if(k==0)
        {
            printf("OK\n");
        }
        else
        {
            printf("Sorry\n");
        }
    }

}