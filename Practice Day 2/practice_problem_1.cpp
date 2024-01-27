#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int roll;
    char section;
    int math_marks;
    int cls;

Student(string a,int b, char c,int d,int e)
{
//strcpy(name,a);
name=a;
roll=b;
section=c;
math_marks=d;
cls=e;

}
};
int main()
{
    Student ob1("Sanjana",23,'a',99,10);
    Student ob2("Akash",24,'b',57,10);
    Student ob3("Nuba",25,'c',178,10);
    //cout<<ob1.name<<" "<<ob1.math_marks<<endl;
    if(ob1.math_marks>ob2.math_marks&&ob1.math_marks>ob3.math_marks)
    {
      cout<<ob1.name<<" "<<ob1.math_marks<<endl;
    }
    else if(ob2.math_marks>ob1.math_marks&&ob2.math_marks>ob3.math_marks)
    {
        cout<<ob2.name<<" "<<ob2.math_marks<<endl;
    }
    else if(ob3.math_marks>ob1.math_marks&& ob3.math_marks>ob2.math_marks)
    {
        cout<<ob3.name<<" "<<ob3.math_marks<<endl;
    }

    return 0;
}