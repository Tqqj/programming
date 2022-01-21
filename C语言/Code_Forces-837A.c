#include<stdio.h>
int max(int a,int b)
{
	if(a>b)
	return a;
	else
	return b;	
} 
int main()
{
	int i,j,g=0,k=0,num;
	char s[1000];
	scanf("%d",&num);
	getchar();
	gets(s);
	for(i=0;i<num;i++)
	{
		if(s[i]>='A'&&s[i]<='Z')
		g++;
		k=max(k,g);
		if(s[i]==' ')
		g=0;
	}
	printf("%d",k);
	return 0;
}