#include<stdio.h>
int main()
{
    int sum = 1,n;
    while(scanf("%d",&n)!=EOF)
    {
        for(int i=1;i<n;i++)
        {
            sum = (sum+1)*2;
        }
        printf("%d\n",sum);
        sum = 1;
    }
}