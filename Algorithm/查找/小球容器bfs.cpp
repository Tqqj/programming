#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int> a,b;
    int n,m;
    int q[10];
    cin>>n;
    while(n--)
    {
        int k=0;
        for(int i=0;i<10;i++) cin>>q[i];
        a.push(q[0]);
        for(int i=1;i<10;i++)
        {
            if(q[i]>a.top()){
                a.push(q[i]);
            }
            else{
                b.push(q[i]);
            }
        }
        if(b.empty()){
            cout<<"YES"<<endl;
            continue;
        }
        int c=b.size()-1;
        while(b.size()!=1){
            int x=b.top();
            b.pop();
            int y=b.top();
            if(x>y) k++;
        }
        if(k==c) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        while(!a.empty()) a.pop();
        while(!b.empty()) b.pop();
}
}