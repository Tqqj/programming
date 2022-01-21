#include<stdio.h>
int nun(int n);
int main()
{
	int n;
	while(scanf("%d",&n)&&nun(n)>0)
	printf("%d\n",nun(n));
	return 0;	
 } 
 int nun(int n)
{
   if(n>=4) 
    return nun(n-1)+nun(n-3);
	return n;
}