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

int main()
{
Student ob1("Sanjana",23,2,'A');
cout<<ob1.name<<endl;
cout<<ob1.roll<<endl;
cout<<ob1.cls<<endl;
cout<<ob1.section<<endl;

Student ob2("Oney",49,5,'C');
cout<<ob2.name<<endl;
cout<<ob2.roll<<endl;
cout<<ob2.cls<<endl;
cout<<ob2.section<<endl;

    return 0;
}