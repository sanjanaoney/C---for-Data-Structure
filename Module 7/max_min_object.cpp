#include<bits/stdc++.h>
using namespace std;
class Student
{
public:
string name;
int roll;
int marks;
};
int main()
{
Student a[3];
for(int i=0;i<3;i++)
{
    getline(cin,a[i].name);
    cin>>a[i].roll;
    cin>>a[i].marks;
    cin.ignore();
}
Student mx;
mx.marks=INT_MIN;
for(int i=0;i<3;i++)
{
    if(a[i].marks>mx.marks)
    {
        mx=a[i];
    }
}
Student mn;
mn.marks=INT_MAX;
for(int i=0;i<3;i++)
{
    if(a[i].marks<mn.marks)
    {
        mn=a[i];
    }
}

    cout<<mx.name<<" "<<mx.marks<<" "<<mx.roll<<endl;

    cout<<mn.name<<" "<<mn.marks<<" "<<mn.roll<<endl;

    return 0;
}