#include<stdio.h>
int main()
{
    int i=5,j=5,p,q;
    p = (i++)+(i++)+(i++);  //5+6+7=18   i=8
    q = (++j)+(++j)+(++j);  //6+7+8=21   j=8
    printf("%d,%d,%d,%d",p,q,i,j);
    return 0;
}