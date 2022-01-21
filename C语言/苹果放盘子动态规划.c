#include<stdio.h>
const int m=7,n=3;
int i,j;
int q[m+1][n+1];
int main()
{
    for(i=0;i<=n;i++)
    {
        q[i][0]=0;
        q[i][1]=1;
    }
    for(i=0;i<=m;i++) q[0][i]=1;
    for(i=0;i<=m;i++)
        for(j=0;j<=n;j++)
        {
            if(n>m) q[i][j]=q[i][i];
            else q[i][j]=q[i][j-1]+q[i-j][j];
        }
    printf("%d",q[m][n]);
    return 0;
}