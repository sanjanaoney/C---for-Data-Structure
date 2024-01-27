#include<bits/stdc++.h>
using namespace std;
class student
{
public:
string nm;
int cls;
string s;
int id;
};
int main()
{
int n,i;
cin>>n;
student a[n];
for( i=0;i<n;i++)
{
    cin>>a[i].nm>>a[i].cls>>a[i].s>>a[i].id;
}
int start=0,end=n-1;
while(start<end)
{
   int temp = a[start].id;
        a[start].id = a[end].id;
        a[end].id = temp;
        start++;
        end--; 
}

for(int i=0;i<n;i++)
{
    cout<<a[i].nm<<" "<<a[i].cls<<" "<<a[i].s<<" "<<a[i].id<<endl;

}

    return 0;
}