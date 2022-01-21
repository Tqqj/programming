#include<stdio.h>
int main()
{
    int num;
    float u,v,w,l,i,r;
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        scanf("%f %f %f %f",&u,&v,&w,&l);
        r=l/(u+v)*w;
        printf("%.3f\n",r);
        r=0;
    }
    return 0;
}