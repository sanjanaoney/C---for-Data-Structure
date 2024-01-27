#include<bits/stdc++.h>
using namespace std;
class student
{
public:
string name;
int age;
student(string name,int age)
{
    (*this).name=name;
    this->age=age;
}
};
int main()
{
student ob1("oney",22);
cout<<ob1.name<<" "<<ob1.age<<endl;
    return 0;
}