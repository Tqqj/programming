#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,i;
    int h=1,l=1;
    while(~scanf("%d",&n))
    {
        if(n==-1) continue;
        for(i=0;i<=n;i++)
        {
            h=h*pow(3,i); l=l*1;
        }
        printf("%d",h);
    }
    
    return 0;
}