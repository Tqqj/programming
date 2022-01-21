#include<iostream>
using namespace std;
int main()
{
    struct data{
        short b;  //对齐字节为4， 然后补4字节，char1字节和short2字节，最后浪费一个字节
        int a;
        char c;
    };
    printf("%lu",sizeof(struct data));
    return 0;
}