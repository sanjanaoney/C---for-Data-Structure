#include<iostream>
using namespace std;
int main()
{
char X;
cin>>X;
if(X>='A'&& X<='Z')
{
    cout<<"ALPHA\nIS CAPITAL";
}
else if(X>='a'&& X<='z')
{
    cout<<"ALPHA\nIS SMALL";
}
else
{
    cout<<"IS DIGIT";
}
    return 0;
}