#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int n,i,len;
    char *s1,*s2;
    cin>>n;
    while(n--){
        cin>>s1;
        len = strlen(s1);
        if(len&1) cout<<"NO"<<endl;
        else{
            s2 = s1 + len;
            cout<<s2<<endl;
            //if(memcmp(s1,s2,len>>1)==0) cout<<"YES"<<endl;
        }

    }
    

    return 0;
}