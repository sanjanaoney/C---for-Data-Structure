#include<bits/stdc++.h>
using namespace std;
namespace akash
{
    int age=2;
    void hello()
    {
        cout<<"Hello i'm baby"<<endl;
    }
}
namespace oney
{
    int age2=21;
    void hello2()
    {
        cout<<"Hello i'm adult"<<endl;
    }
}
using namespace akash;
using namespace oney; 
int main()
{
cout<<age<<" ";
hello();
//cout<<endl;
cout<<age2<<" ";
hello2();
    return 0;
}