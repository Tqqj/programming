#include<iostream>
#include<string>
#include<ctime>
using namespace std;
struct student{
    string sname;
    int score;
};
struct teacher{
    string tname;
    struct student stu[5];
};
void allocatespace(teacher t[],int len)
{
    srand((unsigned int)time(NULL));
    string nameseed = "ABCDE";
    for(int i=0;i<len;i++){
        t[i].tname = "Teacher_";
        t[i].tname += nameseed[i];
        for(int j=0;j<5;j++){
            t[i].stu[j].sname = "Student_";
            t[i].stu[j].sname += nameseed[j];
            //这里%60就是0～59 所以%61就是0～60 +40前面和后面都加40即40～100
            t[i].stu[j].score = rand()%61+40;
        }
    }
}
void printTeandStu(teacher t[],int len)
{
    for(int i=0;i<len;i++){
        cout<<"老师姓名: "<<t[i].tname<<endl;
        for(int j=0;j<5;j++){
            cout<<"\t学生姓名: "<<t[i].stu[j].sname<<' '
            <<"考试分数: "<<t[i].stu[j].score<<endl;
        }
    }
}
int main()
{
    teacher t[3];
    int len = sizeof(t)/sizeof(t[0]);
    //给每一个老师和学生赋值
    allocatespace(t,len);
    //打印
    printTeandStu(t,len);
    return 0;
}