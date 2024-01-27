#include<bits/stdc++.h>
using namespace std;
class Student
{
public:
char name[100];
int roll;
int cls;
char section;

Student(char* a,int b,int c,char d)
{
    strcpy(name,a);
    roll=b;
    cls=c;
    section=d;
}

};
Student fun()
{
    char name[100]="Sanjana";
    Student ob1(name,23,2,'A');
    return ob1;
}

int main()
{
    Student ob1=fun();
    cout<<ob1.name<<endl;
    cout<<ob1.roll<<endl;
    cout<<ob1.cls<<endl;
    cout<<ob1.section<<endl;

    return 0;
}