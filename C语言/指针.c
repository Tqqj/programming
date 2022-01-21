#include<stdio.h>
#include<stdlib.h>
void processArray(int* p, int n)
{
    int i;
    int *max = p,*min = p;
    for(i=1;i<n;i++)
    {
        if(*max<*(p+i)) max = p+i;
        if(*min>*(p+i)) min = p+i;
    }
    int a = *max;
    int b = *min;
    *max = *(p+n-1);
    *(p+n-1) = a;
    *min = *p;
    *p = b;
}
int main()
{
    int n,i;
    int *p;
    scanf("%d",&n);
    p = (int*) malloc(n*sizeof(int));
    for(i=0;i<n;i++) scanf("%d",p+i);
    processArray(p,n);
    for(i=0;i<n;i++) printf(i==0?"%d":" %d",*(p+i));
    free(p);
    return 0;
}