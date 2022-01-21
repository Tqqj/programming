#include<stdio.h>
int fun(int m, int n) {
    if(m==0 || n==1)
        return 1;
    if(n>m)
        return fun(m,m);
    else
        return fun(m,n-1)+fun(m-n,n);
}
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    printf("%d",fun(m, n));
    return 0;
}