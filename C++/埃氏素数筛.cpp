#include<iostream>
#include<cmath> 
using namespace std;
int main()
{
    int n;
    while(cin>>n,n)
    {
        int judge[1000010];
        int p,i,j,cnt=0;
        cin>>p;
        for(i=2;i<p;i++) judge[i]=1;
        for(i=2;i*i<=p;i++)
        {
            if(judge[i])
            {
                for(j=i+i;j<p;j+=i)
                {
                    judge[j] = 0;
                }
            }
        }
        for(i=2;i<p;i++)
        {
            if(judge[i]==1) cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}