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
    char name[100]="Nafiz";
    //if there isn't any constructor this will be
    //Student* ob1=new Student
    Student* ob1=new Student(name,23,2,'A');
    //cout<<ob1->name<<endl;
    //another way
    cout<<(*ob1).name<<endl;
    cout<<ob1->roll<<endl;
    cout<<ob1->cls<<endl;
    cout<<ob1->section<<endl;
    //deleting an object
    delete ob1;
    cout<<(*ob1).name<<endl;
    cout<<ob1->roll<<endl;
    cout<<ob1->cls<<endl;
    cout<<ob1->section<<endl;
    return 0;
}