#include<stdio.h>
int i,j;
void initArray(int(*p)[5],int m)
{
    for(i=0;i<m;i++)
        for(j=0;j<5;j++)
        scanf("%d",(*(p+i))+j);
}
void printArray(int(*p)[5],int m)
{
    for(i=0;i<m;i++)
        for(j=0;j<5;j++)
        printf("%d%c",*((*(p+i))+j),j==4?'\n':' ');
}
int sumAround(int(*p)[5],int m)
{
    int sum=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<5;j++)
        {
            if(i==1||i==2)
                if(j==1||j==2||j==3) continue;
            sum+=*(*(p+i)+j);
        }
    }
    return sum;
}
int main()
{
    int q[4][5];
    initArray(q, 4);
    printArray(q, 4);
    printf("%d",sumAround(q,4));
    return 0;
}