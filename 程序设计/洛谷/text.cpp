#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE* fp=fopen("/Users/yael/Desktop/程序设计/洛谷/竞争得分.cpp","r");
	char *str,str1[100010];
	int countfor=0;
    char *p;
	char *temp = NULL;
	while (1){
        strcpy(str,fgets(str1,1000,fp));
        temp = strstr(str," for(");
		if (temp == NULL) break;
	    else
		{
			countfor++;
			str = temp + strlen("for(");
		}
    }
    printf("%d",countfor);
	return 0;
}