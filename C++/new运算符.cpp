#include<iostream>
using namespace std;
void newtest(){
    int* p = new int[10];
    for(int i=0;i<10;i++){
        p[i] = 100+i;
    }
    for(int i=0;i<10;i++){
        cout<<p[i]<<endl;
    }
    delete[] p;
}
int main()
{
    newtest();
    return 0;
}