#include<stdio.h>
int main()
{
    int year,day,month,lm,sum;
    while (scanf("%d/%d/%d",&year,&month,&day) != EOF)
    {
        switch(month)
        {
        case 1:sum=0;
        break;
        case 2:sum=31;
        break;
        case 3:sum=59;
        break;
        case 4:sum=90;
        break;
        case 5:sum=120;
        break;
        case 6:sum=151;
        break;
        case 7:sum=181;
        break;
        case 8:sum=212;
        break;
        case 9:sum=243;
        break;
        case 10:sum=273;
        break;
        case 11:sum=304;
        break;
        case 12:sum=334;
        break;
        }
        sum+=day;
        if(year%400==0||(year%4==0&&year%100!=0))
        {
            lm = 1;
        }
        else{
            lm = 0;
        }
        if(lm==1&&month>2)
        {
            sum++;
        }
        printf("%d\n",sum);
    }
    
}