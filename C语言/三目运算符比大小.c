#include<stdio.h>
int main()
{
    int a,b,c;
    printf("请输入三个不同的整数\n");
    scanf("%d%d%d",&a,&b,&c);
    printf("%d最大",a>b>c?a:(c>b?c:b));
    return 0;
}