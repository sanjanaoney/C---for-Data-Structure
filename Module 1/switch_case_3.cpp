#include<iostream>
using namespace std;
int main()
{
int v;
cin>>v;
switch(v%2)
{
    case 0:
    cout<<"EVEN"<<endl;
    break;
    case 1:
    cout<<"ODD"<<endl;
}
return 0;
}