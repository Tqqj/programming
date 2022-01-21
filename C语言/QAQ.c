#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000];
    int i,j,b,k,n=0;
    gets(a);
    b=strlen(a);
    for(i=0;i<b;i++)
    {
        if(a[i]=='Q')
        {
            for(j=i+1;j<b;j++)
            {
                if(a[j]=='A')
                {
                    for(k=j+1;k<b;k++)
                    {
                        if(a[k]=='Q')
                        {
                            n++;
                        }
                    }
                }
            }
        }
    }
    printf("%d",n);
    return 0;
}