#include<iostream>
using namespace std;
int main()
{
    int n,k,i,tmp,sum;
    scanf("%d %d",&n,&k);
    for(i=n;;i++)
    {
        tmp=i,sum=0;
        while(tmp!=0)
        {
            if(tmp%10==3) sum++;
            tmp/=10;
        }
        if(sum==k) break;
    }
    cout<<i;
    return 0;
}