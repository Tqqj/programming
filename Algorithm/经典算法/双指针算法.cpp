#include<iostream>
#include<string.h>
using namespace std;
typedef long long ll;
int main()
{
    char str[100];
    gets(str);
    int l=strlen(str);
    int i,j;
    for(i=0;i<l;i++)
    {
        j=i;
        while(j<l&&str[j]!=' ') j++;
        for(int k=i;k<j;k++){
            cout<<str[k];
        }
        cout<<endl;
        i=j;
    }
    return 0;
}