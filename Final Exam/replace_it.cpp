#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
      string s,x;
      cin>>s>>x;
      int t=s.find(x);
      while(t!=-1)
      {
        s.replace(t,x.length(),"$");
        t=s.find(x,t+1);
      }
      cout<<s<<endl;
    }
    
   

    return 0;
}