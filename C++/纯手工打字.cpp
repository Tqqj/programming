#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a,b;
    int n;
    cin>>n;
    while(n--)
    {
        cin>>a;
        cin>>b;
        int record[27],l1=a.size(),l2=b.size();
        int x,y,s=0;
        for(int i=0;i<l1;i++)
        {
            record[a[i]-'a']=i;
        }
        for(int i=0;i<l2;i++)
        {
            if(i==0)
            {
                x = record[b[i]-'a'];
                continue;
            }
            y = record[b[i]-'a'];
            if(x>y) s+=(x-y);
            else s+=(y-x);
            x=y;
        }
        cout<<s<<endl;
    }
    return 0;
}