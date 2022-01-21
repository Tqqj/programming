#include<stdio.h>
#include<string.h>
int main()
{
    int i,k,j,d,l;
    char s[101];
    while(gets(s))
    {
        l=strlen(s);
        s[0]-=32;
        for(i=0;i<l;i++)
        {
        if(s[i]==32)
        {
            s[i+1]-=32;
        }
        }
        for(k=0;k<l;k++)
        {
            printf("%c",s[k]);
        }
        printf("\n");
        l=0;
    }
    return 0;
}