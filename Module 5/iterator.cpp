#include<bits/stdc++.h>
using namespace std;
int main()
{
//string s="sanjanakhaironey";
/* for(int i=0;i<s.size();i++)
{
    cout<<s[i]<<endl;
}*/
// cout<<*s.begin()<<endl;
// cout<<*(s.end()-1)<<endl;
string s="sanjanakhaironey";
string::iterator it;
for(it=s.begin();it<s.end();it++)
{
    cout<<*it<<endl;
}

    return 0;
}