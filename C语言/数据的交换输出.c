#include<stdio.h>
#include <string.h>
#define SWAP(a,b) {int t;t=a;a=b;b=t;}
int main()
{
    int num,min;
    int a[100];
    while(scanf("%d",&num)!=EOF)
    {
        int s=0;min=2147483647;
        if(num==0)
            continue;
        for(int i=0;i<num;i++)
        {
            scanf("%d",&a[i]);
            if(min>a[i])
            {
                min = a[i];
                s = i;
            }
        }
            SWAP(a[0],a[s]);
            printf("%d",a[0]);
            for(int j=1;j<num;j++)
            {
                printf(" %d",a[j]);
            }
            printf("\n");
    }
}