// #include<bits/stdc++.h>
//  using namespace std;
//  int main()
//  {
//  string s;
//  getline(cin,s);
//  int t=0;
//  while(t!=-1)
//  {
//     t=s.find("EGYPT");
//      s.replace(t,5," ");
     
//  }
//  cout<<s<<endl;
//      return 0;
//  }
#include<bits/stdc++.h>
 using namespace std;
 int main()
 {
 string s;
 getline(cin,s);
 int t=s.find("EGYPT");
 while(t!=-1)
 {
     s.replace(t,5," ");
     t=s.find("EGYPT");
 }
 cout<<s<<endl;
     return 0;
 }
