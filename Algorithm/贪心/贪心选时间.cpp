#include<iostream>
using namespace std;
int b;
struct node{
    int s,t;
}a[100];
bool cmp(node an1,node an2)
{
    return an1.t<an2.t;
}
int n;
int main()
{
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i].s;
    for(int i=0;i<n;i++) cin>>a[i].t;
    sort(a,a+n,cmp);
    int ans = 0;
    for(int i=0;i<n;i++)
    {
        if(t<a[i].t){
            
        }
    }
    return 0;
}