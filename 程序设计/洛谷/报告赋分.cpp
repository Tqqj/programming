#include<iostream>
using namespace std;
int main()
{
    int n,a,p;
    int i,j;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a>>p;
        if(p<16) a-=10;
        else if(p>20){
            a=a-(p-20);
        }
        if(a<0) a=0;
        printf("%d\n",a);
    }
    return 0;
}