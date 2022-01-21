#include<iostream>
#include<string.h>
#include <unordered_map>
using namespace std;
const int N = 1e9+10;
bool q[N];
int main()
{
    unordered_map<int,int>a;
    long long i,n,m;
    long long sum;
    cin>>n;
    while(n--)
    {
        cin>>m;
        sum=0;
        for(i=1;i<1001;i++){
            if(i*i*i<=m&&!q[i*i*i]){
                q[i*i*i]=1;
                sum++;
            }
        }
        for(i=1;i<=sqrt(N);i++){
            if(i*i<=m&&!q[i*i]){
                q[i*i]=1;
                sum++; 
            }
        }
        cout<<sum<<endl;
        memset(q,0,sizeof(q));
    }
    //a.clear();
    return 0;
}