// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     FILE* fp;
//     char s[10010];
//     fp = fopen("/Users/yael/Desktop/C语言/1.c","w+");
//     fscanf(fp,"%s",s);
//     printf("%s",s);
//     fclose(fp);
//     return 0;
// }
#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
   char str1[1000], *str2;
   int year;
   FILE * fp;

   fp = fopen ("/Users/yael/Desktop/程序设计/洛谷/竞争得分.cpp", "r");
   while(1){
   strcpy(str2,fgets(str1,1000,fp));
//    fgets(str1,100,fp);
   printf("%s",str2);
   if(fgets(str1,100,fp)==NULL) break;
   }
   

   fclose(fp);
   
   return(0);
}