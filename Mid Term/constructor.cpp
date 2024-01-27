#include<bits/stdc++.h>
using namespace std;
class Student
{
public:
string name;
int roll;

Student(string a,int b)
{
    name=a;
    roll=b;
}
};
int main()
{
Student S1("Sanjana",26);
Student S2("Oney",87);
cout<<S1.name<<" "<<S1.roll<<endl;
cout<<S2.name<<" "<<S2.roll<<endl;

    return 0;
}