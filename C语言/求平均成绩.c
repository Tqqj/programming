#include<stdio.h>
int main()
{
    int n,m,a[50][5],i,j,l,q,x,stu;
    double v[50],b[50],sum,sub;
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        stu = 0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                sum = sum + a[i][j];
            }
            v[i] = sum/m;
            sum = 0;
        }
        for(j=0;j<m;j++)
        {
            for(i=0;i<n;i++)
            {
                sub = sub + a[i][j];
            }
            b[j] = sub/n;
            sub = 0;
        }
        for(l=0;l<n;l++)
        {
            printf("%.2lf%c",v[l],l!=n-1?' ':'\n');
        }
        for(q=0;q<m;q++)
        {
            printf("%.2lf%c",b[q],q!=m-1?' ':'\n');
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(a[i][j]>=b[j])
                {
                    x++;
                    if(x==m)
                    {stu++;}
                }
            }
        x=0;
        }
        printf("%d\n\n",stu);
        stu=0;
    }
}