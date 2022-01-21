#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,l;
    int a=0,e=0,ii=0,o=0,u=0;
    char s[101];
    scanf("%d",&n);
    scanf("\n");
    for(i=0;i<n;i++)
    {
        gets(s);
        l=strlen(s);
        for(j=0;j<l;j++)
        {
            if(s[j]=='a'||s[j]=='A')
            a++;
            if(s[j]=='e'||s[j]=='E')
            e++;
            if(s[j]=='i'||s[j]=='I')
            ii++;
            if(s[j]=='o'||s[j]=='O')
            o++;
            if(s[j]=='u'||s[j]=='U')
            u++;
        }
        printf("a:%d\n",a);
        printf("e:%d\n",e);
        printf("i:%d\n",ii);
        printf("o:%d\n",o);
        if(i!=n-1)
			printf("u:%d\n\n",u);
		else
			printf("u:%d\n",u);
        a=0;e=0;ii=0;o=0;u=0;
    }
}