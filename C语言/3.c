#include <stdio.h>
int main()
{
   int n,m;
   while(~scanf("%d%d",&n,&m))
   {
    int c,b,i,t=2,j;
    if(m>n)
    {
        j = m;
        m = n;
        n = j;
    }
    c=n%m;
    b=n/m;
    for(i=0;i<b;i++)
    {
     printf("%d",t+m-1);
     if(i<b-1)
     printf(" ");
     t=t+2*m; 
    }
    if(c!=0)
    printf(" %d",t+c-1);
    printf("\n");
   }
}