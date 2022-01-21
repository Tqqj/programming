#include<stdio.h>
int main()
{
    /*从用户角度来看，函数分为标准函数（即库函数）和用户自定义函数
    从函数的形式来看，函数分为无参函数和有参函数*/
    void printstar();
    void print_message();
    printstar();
    print_message();
    printstar();
    return 0;
}
void printstar()
{
    printf("*************\n");
}
void print_message()
{
    printf("hello, world!\n");
}