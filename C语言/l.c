#include <stdio.h>
#include <math.h>
#include<stdlib.h>
int main()
{
int t,a[101],n,i,j;
scanf("%d",&n);
for (i=0;i<n;i++)
scanf("%d",&a[i]);
for (i=1;i<n;i++)
for(j=0;j<n-i;j++)
{
if(abs(a[j])>abs(a[j+1]))
{
t=a[j];
a[j]=a[j+1];
a[j+1]=t;
}
}
for (i=0;i<n;i++)
printf("%d ",a[i]);
return 0;
}