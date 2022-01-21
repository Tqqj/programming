#include<iostream>
#include <unordered_map>
#include<cstring>
#include<cmath>
using namespace std;
const int N = 1e9;
int main()
{
    unordered_map<int,int>a;
    long long i;
    int sum,n,m;
    cin>>n;
    while(n--)
    {
        cin>>m;
        sum=0;
        for(i=1;i<1001;i++)
            if(i*i*i<=m&&!a[i*i*i]){
                a[i*i*i]=1;
                sum++;
            }
        for(i=1;i<=sqrt(N);i++)
            if(i*i<=m&&!a[i*i]){
                a[i*i]=1;
                sum++;
            }
        cout<<sum<<endl;
        a.clear();
    }
    return 0;
}