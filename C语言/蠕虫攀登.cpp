#include<iostream>
using namespace std;
int main()
{
    int n,u,d;
    int min=0;
    while(~scanf("%d %d %d",&n,&u,&d))
    {
        if(n==0) continue;
        while(n>0)
        {
            if(n>u) min+=2;
            else min+=1;
            if(n<=u) n-=u;
            else n=n-u+d;
        }
        cout<<min<<endl;
        min=0;
    }
    return 0;
}