#include<stdio.h>
#include<string.h>
int main()
{
    int num;
    char s[10000];
    int l =0,count=0;
    scanf("%d",&num);
    for(int i=0;i<num;i++)
    {
        getchar();
        gets(s);
        l=strlen(s);
    for(int j=0;j<l;j++)
    {
        if(s[j]>='0'&&s[j]<='9')
            count++;
    }
        printf("%d\n",count);
        count=0;
    }
        l = 0;
}