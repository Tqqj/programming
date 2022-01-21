#include<stdio.h>
int a=9,b=8;
void swap(){
    int t=a;
    a=b;
    b=t;
}
int main()
{
    swap();
    printf("%d %d",a,b);
    return 0;
}