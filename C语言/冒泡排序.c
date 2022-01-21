#include<stdio.h>
int main()
{
    int a[10],j,k,i;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n");
    for(j=0;j<9;j++)
    {
        for(i=0;i<9-j;i++)
        {
            if(a[i]>a[i+1])
            {
                k = a[i];
                a[i] = a[i+1];    //a[5]=1 a[435]=1  a[20]={0}
                a[i+1]=k;
            }
        }
    }
    printf("The number is:\n");
    for(i=0;i<=9;i++)
    {
        printf("%d\n",a[i]);
    }
}