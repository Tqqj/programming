#include<stdio.h>
int main()
{
    FILE* p;
    p = fopen("/Users/yael/Desktop/data.txt","w");
    if(p==0){
        printf("文件不存在！\n");
        return -1;
    }
    fputc('A',p);
    fclose(p);
    return 0;
}