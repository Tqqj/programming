#include<iostream>
#include<queue>
using namespace std;
struct Data{
    int x,y;
};
int main()
{
    queue<int> a;
    queue<Data> aa;
    aa.push({1,2});
    Data data=aa.front();
    printf("x: %d\n",data.x);
    printf("y: %d\n",data.y);
    for(int i=0;i<10;i++) a.push(i);
    int b;
    while(!a.empty())
    {
        b=a.front();
        a.pop();
        cout<<b<<endl;
    }
    return 0;
}