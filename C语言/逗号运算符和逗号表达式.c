#include <stdio.h>
int main()
{
    int a=2,b=4,c=6,x,y;
    y = ((x=a+b),(b+c));  //x = 6  y = b+c=10
    printf("y=%d,x=%d",y,x);
    return 0;
}