#include<bits/stdc++.h>
using namespace std;
class person
{
public:
string name;
float height;
int age;
person(string a,float b,int c)
{
    name=a;
    height=b;
    age=c;
}
};

int main()
{
    person* ob1=new person("Sanjana",5.2,26);
    person* ob2=new person("Oney",6.0,25);
    if ( ob1->age>ob2->age)
    {
      cout<<ob1->name<<endl;
    }
    else
    {
       cout<<ob2->name<<endl;
    }
    
    return 0;
}