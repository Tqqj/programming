#include <stdio.h>
int main()
{
	int n,i;
	printf("请输入字符的长度");
	scanf("%d",&n);
	char a[n];//此处定义为n+1是因为字符串的下标要小一个 
	printf("请输入字符");
	getchar(); 
	for (i=0;i<n;i++)
	{
		scanf("%c",&a[i]);
	}
	printf("%s",a);
	return 0;
}
