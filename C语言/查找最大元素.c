#include<stdio.h>
#include<string.h>
int main()
{
    char s[101],max;
    while(gets(s))
    {
    int n,i,j,a[100]={0},c=0,k=0;
    max = s[0];
    for(i=1;s[i]!='\0';i++)
    {
        if(s[i]>max)
        {
            c=0;
            max = s[i];
            a[0] = i;
        }
        else if(s[i]==max)
        {
            a[++c]=i;
        }
    }
    for(j=0;s[j]!='\0';j++)
    {
        printf("%c", s[j]);
        if(j == a[k])
        {
            printf("(max)");
            k++;
        }
    }
    printf("\n");
    }
    return 0;
}