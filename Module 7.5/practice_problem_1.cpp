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
    for(int i=0;i<4;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(a[i].marks<a[j].marks)
            {
                swap(a[i],a[j]);
            }
            else if(a[i].marks==a[j].marks&&a[i].roll>a[j].roll)
            {
                swap(a[i],a[j]);
            }
        }
    }
    for(int i=0;i<5;i++)
    {
        cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].marks<<endl;
    }

    return 0;
}  
