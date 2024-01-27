#include<bits/stdc++.h>
using namespace std;
class person
{
public:
string name;
int age;
person(string name,int age)
{
    this->name=name;
    this->age=age;
}
};
int main()
{
person* ob1=new person("sanjana",25);
person *ob2=new person("oney",23);
*ob1=*ob2;
delete ob2;
cout<<ob1->name<<" "<<ob1->age;

    return 0;
}