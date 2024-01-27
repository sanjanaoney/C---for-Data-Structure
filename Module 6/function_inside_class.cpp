#include<bits/stdc++.h>
using namespace std;
class person
{
public:
string name;
int age;
int marks1,marks2;
person(string a,int b,int c,int d)
{
    name=a;
    age=b;
    marks1=c;
    marks2=d;
}

void hello()
{
    cout<<"hello";
}
void total_marks()
{
cout<<marks1+marks2<<endl;
}
};

int main()
{
person ob1("sanajna",22,95,78);
//cout<<ob1.name<<" "<<ob1.age;
//ob1.hello();
ob1.total_marks();
    return 0;
}