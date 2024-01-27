#include<bits/stdc++.h>
using namespace std;
class student
{
public:
int roll;
int marks;
};
int main()
{
    student a[3];
for(int i=0;i<3;i++)
{
cin>>a[i].roll>>a[i].marks;
}
for(int i=0;i<2;i++)
{
    for(int j=i+1;j<3;j++)
    {
        if(a[i].marks<a[j].marks)
        {
            swap(a[i],a[j]);
        }
    }
}
for(int i=0;i<3;i++)
{
    cout<<a[i].roll<<" "<<a[i].marks<<" "<<endl;
}

    return 0;
}