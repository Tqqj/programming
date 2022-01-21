#include<stdio.h>
void b(int, int);

int main()
{
    int n,r;
    while(scanf("%d %d",&n,&r)!=EOF)
    {
        if(n==0)
            printf("%d",0);
        else if(n<0)
        {
            printf("-");
            n=-n;
        }
        b(n,r);
        printf("\n");
    }
    return 0;
}

void b(int n, int r)
{
    int m;
    if(n==0)
        return;
    else
    {
        b(n/r, r);
        m=n%r;
        if(m<10)
            printf("%d", m);
        else
            printf("%c", 'A'+m-10);
    }
}