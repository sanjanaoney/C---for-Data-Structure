#include<bits/stdc++.h>
using namespace std;
class bike
{
public:
string name;
string color;
int speed;

bike(string a,string b,int c)
{
    name=a;
    color=b;
    speed=c;
}
};
bike fun()
{
    bike ob1("Honda","red",220);
    return ob1;
}

int main()
{
    bike ob1=fun();
    cout<<ob1.name<<endl;
    cout<<ob1.color<<endl;
    cout<<ob1.speed<<endl;
    return 0;
}