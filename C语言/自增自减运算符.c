#include<stdio.h>
int main()
{
    int i = 8;
    printf("%d\n",++i);  //先自增再参与运算
    printf("%d\n",--i);
    printf("%d\n",i++);  //先参与运算再自增
    printf("%d\n",i--);
    printf("%d\n",-i++);
    printf("%d\n",-i--);
    return 0;
}