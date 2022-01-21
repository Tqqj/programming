#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double h;
    int m;
    cin>>h>>m;
    cout<<fixed<<setprecision(3)<<h/m<<endl<<m*2;
    return 0;
}