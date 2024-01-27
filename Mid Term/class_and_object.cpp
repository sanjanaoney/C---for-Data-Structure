#include<bits/stdc++.h>
using namespace std;
class Student
{
public:
string name;
int roll;
};
int main()
{
    Student S1;
    S1.name="Sanjana";
    S1.roll=26;
    Student S2;
    S2.name="Oney";
    S2.roll=87;
    cout<<S1.name<<" "<<S1.roll<<endl;
    cout<<S2.name<<" "<<S2.roll<<endl;

    return 0;
}
