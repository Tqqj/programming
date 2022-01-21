#include <stdio.h>
#define N 3
#define M 4
int main(){
    int a[N][M]={{1,2,3,4},{5,6,7,8},{9,10,11,12}},i,j,*p;
    p=(int *)a;//将二维数组a变成一维数组p
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;printf("%3d",a[i][j++]));//用数组名a仍然按二维数组操作
        printf("\n");
    }
    printf("\n");
    for(j=M*N,i=0;i<j;printf("%3d",p[i++]));//用p则按一维数组操作
    printf("\n");
    return 0;
}