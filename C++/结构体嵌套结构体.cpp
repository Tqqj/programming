#include<iostream>
using namespace std;
struct student{
    string name;
    int age;
    int score;
};
struct teacher{
    int id;
    string name;
    int age;
    struct student stu;
};
int main()
{
    teacher t;
    t.id = 001;
    t.name = "老王";
    t.age = 50;
    t.stu.name = "小王";
    t.stu.age = 11;
    t.stu.score = 60;
    printf("老师ID：%03d",t.id); //防止前导0使系统默认认为八进制
    cout<<' ';
    cout<<"老师姓名："<<t.name<<' '
    <<"老师年龄："<<t.age<<endl
    <<"老师辅导的学生姓名："<<t.stu.name<<' '
    <<"学生年龄："<<t.stu.age<<' '
    <<"学生成绩："<<t.stu.score<<endl;
    return 0;
}