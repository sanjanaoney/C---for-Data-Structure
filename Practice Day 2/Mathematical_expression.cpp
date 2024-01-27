#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,b,c;
char s,q;
cin>>a>>s>>b>>q>>c;
if(s=='+'&&q=='='&&a+b==c)
{
    cout<<"Yes";
}
else if(s=='+'&&q=='='&&a+b!=c)
{
    int sum=a+b;
    cout<<sum;
}
else if(s=='-'&&q=='='&&a-b==c)
{
    cout<<"Yes";
}
else if(s=='-'&&q=='='&&a-b!=c)
{
    int sub=a-b;
    cout<<sub;
}
else if(s=='*'&&q=='='&&a*b==c)

{
   cout<<"Yes";
}
else if(s=='*'&&q=='='&&a*b!=c)

{
    int multi=a*b;
   cout<<multi;
}
    return 0;
}