#include<bits/stdc++.h>
using namespace std;
void print(stringstream & ss,int flag)
{
 
     string word;
    if(ss>>word)
    { 
      if(flag==1)
 {
  cout<<" ";
 }
 flag=1;  
       reverse(word.begin(),word.end());
       cout<<word;
      print(ss,flag);
     
    }
}
int main()
{
string s;
getline(cin,s);
cin.ignore();
//reverse(s.begin(),s.end());
stringstream ss(s);
print(ss,0);
return 0;
}