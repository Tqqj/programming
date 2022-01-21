#include<iostream>
#include<algorithm>
using namespace std;
int gcd(int n,int m)
{
    while(m)
    {
        int r = n%m;
            n = m;
            n = r;
    }
    return n;
}
int main()
{
    int n,a;
    int i=0,j=0,k=0;
    int r[100010];
    int sum=0;
    int q[1010];
    cin>>n;
    for(i=2;i<n;i++)
    {
        a=n;
        while(a)
        {
            r[j++]=a%i;
            sum+=r[k++];
            a/=i;
        }
        j=0;
        k=0;
    }
    int l = gcd(sum,n-2);
    cout<<sum/l<<'/'<<(n-2)/l;
    return 0;
}