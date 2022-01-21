#include<stdio.h>
int main(void)
{
    //putchar是专业的字符输出函数
    char a='B',b='k',c='o';
    putchar(a);putchar(b);putchar(c);
    putchar('\n');putchar('\101'); //输出转义字符和字符A
}