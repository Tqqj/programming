#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,x,k;
    int g,h,a;
    unsigned int q[1000010];
    int p[100001];
    cin>>n;
    int i,j;
    for(i=0;i<n;i++)
    {
        k=0;
        cin>>x;
        for(j=0;j<x;j++)
        {
            a=0;
            q[j]= x ^ j;
            if(q[j]==1) continue;
        for(g=0;g<=100000;g++) p[i]=1;
        for(g=2;g<=sqrt(100000);g++){
        if(p[g])
            for(int h=g*g;h<=100000;h+=g)
            	p[h]=0;
        }
        for(g=2;g<=100000;g++){
            if(p[g])
                if(g==q[j]) k++;
        }
        }
        cout<<k<<endl;
    }

    return 0;
}