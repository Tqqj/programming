#include<stdio.h>
int main()
{
    /*类型转换包括隐式类型转换和显式类型转换，又称自动类型转换和强制类型转换*/
    int a,b=322;
    float x,y=8.88;
    char cl='k',c2;
    a = y;  //a=(int)y=8
    x = b;  //x=(float)b=322.000000
    a = cl;  //a=(int)cl=107
    c2 = b;  //c2=(char)b=B
    printf("%d,%f,%d,%c",a,x,a,c2);
}