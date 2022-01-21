#include<iostream>
using namespace std;
struct student{
    string name;
    int age;
    int score;
};
void chengestu(student *p,int number){
    (p+number-1)->name = "赵六"; //结构体指针
    (p+number-1)->age = 20;
    (p+number-1)->score = 70;
}
void printstu(student* p,int number){
    for(int i=0;i<number;i++){
        cout<<"姓名："<<(p+i)->name<<' '
            <<"年龄："<<(p+i)->age<<' '
            <<"成绩："<<(p+i)->score<<endl;
    }
}
int main()
{
   student stu[3]={
        {"张三",18,100},
        {"李四",15,98},
        {"王五",19,88}
    };
    chengestu(stu,3);
    printstu(stu,3);
    return 0;
}