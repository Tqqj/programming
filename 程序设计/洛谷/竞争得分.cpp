#include<iostream>
using namespace std;
int main()
{
    int n;
    int i;
    int a[10010];
    double b[10010];
    int max,min;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    max=a[0];
    min=a[0];
    for(i=0;i<n;i++)
    {
        if(max<a[i]) max = a[i];
        if(min>a[i]) min = a[i];
    }
    for(i=0;i<n;i++)
    {
        b[i]=((double)(a[i]-min)/(double)(max-min))*100;
    }
    for(i=0;i<n;i++) printf(i==0?"%d":" %d",(int)b[i]);
    return 0;
}
