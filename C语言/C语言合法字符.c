#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j;
    int t=0,b=0;
    char s[50];
    while(scanf("%d",&n)!=EOF)
    {
        getchar();
        for(i=0;i<n;i++)
        {
            gets(s);
            b = strlen(s);
            if((s[0]>='a'&&s[0]<='z')||(s[0]>='A'&&s[0]<='Z')||(s[0]=='_'))
            {
                for(j=1;s[j]!='\0';j++)
                {
                    if((s[j]>='a'&&s[j]<='z')||(s[j]>='A'&&s[j]<='Z')||(s[j]=='_')||(s[j]>='0'&&s[j]<='9'))
                    {
                        t++;
                    }
                }
                if(t==b-1)
                {
                    printf("yes\n");
                }
                else{
                    printf("no\n");
                }
            }
            else
            {
                printf("no\n");
            }
            t=0;b=0;
        }
    }
}