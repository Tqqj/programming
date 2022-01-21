#include<iostream>
using namespace std;
int main()
{
    int a,b;
    int c[10010];
    int i=0,sum=0;
    cin>>a>>b;
    while()
    {
        r = (a%10)*b;
        c[i++]=r%10;
        sum+=(a%10)*b/10;
        a/=10;
    }
    return 0;
}