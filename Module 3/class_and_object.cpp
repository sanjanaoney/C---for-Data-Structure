#include<bits/stdc++.h>
using namespace std;
class Student
{
public:
char name[100];
int roll;
int cls;
char section;
} ;
int main()
{ 
    Student S1;
    char nm[100]="Sanjana";
    strcpy(S1.name,nm);
    S1.cls=3;
    S1.roll=28;
    S1.section='A';

    Student S2;
    char nm1[100]="Oney";
    strcpy(S2.name,nm1);
    S2.cls=6;
    S2.roll=23;
    S2.section='B';
    cout<< S1.name << S1.cls << S1.roll << S1.section <<endl;
    cout<< S2.name << S2.cls << S2.roll << S2.section <<endl;

    return 0;
}