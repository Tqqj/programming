#include<iostream>
using namespace std;
struct Hero{
    string name;
    int age;
    string sex;
};
void printhero(Hero hero[],int len){
    for(int i=0;i<len;i++)
    {
        cout<<hero[i].name<<' '
            <<hero[i].age<<' '
            <<hero[i].sex<<endl;
    }
}
void bubblesort(Hero hero[],int len)
{
    for(int i=0;i<len-1;i++)
    {
        for(int j=0;j<len-1-i;j++)
        {
            if(hero[j].age > hero[j+1].age){
                Hero temp = hero[j];
                hero[j] = hero[j+1];
                hero[j+1] = temp;
            }
        }
    }
}
int main()
{
    Hero hero[5] = {
        {"张飞",56,"男"},
        {"关羽",45,"男"},
        {"刘备",60,"男"},
        {"小乔",33,"女"},
        {"貂蝉",35,"女"}
    };
    int len = sizeof(hero)/sizeof(hero[0]);
    cout<<"排序前: "<<endl;
    printhero(hero,len);
    bubblesort(hero,len);
    cout<<"排序后: "<<endl;
    printhero(hero,len);
    return 0;
}