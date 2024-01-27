#include<bits/stdc++.h>
using namespace std;
class student
{
public:
string name;
int roll;
int marks;
};
int main()
{ 
    int n;
    cin>>n;
    student a[5];
    for(int i=0;i<5;i++)
    {   
       
        cin>>a[i].name>>a[i].roll>>a[i].marks;
        
    }
    for (int i = 0; i < n / 2; i++)
{
    student temp = a[i];
    a[i] = a[n - 1 - i];
    a[n - 1 - i] = temp;
}

    
    for(int i=0;i<5;i++)
    {
        cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].marks<<endl;
    }

    return 0;
}  
