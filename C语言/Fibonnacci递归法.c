#include<stdio.h>
int ace(int n);
int ace(int n)
{
    if(n==1)
    return 0;
    if(n==2)
    return 1;
    return ace(n-1)+ace(n-2);
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",ace(n));
    return 0;
}