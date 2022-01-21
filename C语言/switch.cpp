#include<iostream>
using namespace std;
int main()
{
    int score;
    while(scanf("%d",&score)!=EOF)
    {
        switch(score/10)
        {
        case 10:
        if(score>100)
        cout<<"Score is error!"<<endl;
        else{cout<<"A"<<endl;}
        break;
        case 9:
        cout<<"A"<<endl;
        break;
        case 8:
        cout<<"B"<<endl;
        break;
        case 7:
        cout<<"C"<<endl;
        break;
        case 6:
        cout<<"D"<<endl;
        break;
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
        if(score>=0)
        {
        cout<<"E"<<endl;
        }
        else{
            cout<<"Score is error!"<<endl;
        }
        break;
        }
    }
    return 0;
}
