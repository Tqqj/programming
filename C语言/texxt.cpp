#include<stdio.h>
#include<stdlib.h>
int main()
{
  int* p;
  int a,b;
  a = 10; b = 20;
  p = &a;
  printf("address of p = %p\n",p);
  printf("value of a = %d\n",*p);
  *p = b; 
  printf("address of p = %p\n",p);
  printf("value of a = %d\n",a);
  printf("value of b = %d\n",*p);
  printf("size of integer is %lu\n",sizeof(int));
  printf("p + 1 is %p\n",p+1);
  printf("p + 2 is %p\n",p+2);
  return 0;
}