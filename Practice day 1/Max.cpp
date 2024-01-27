#include<bits/stdc++.h>
using namespace std;
int main()
{
int i,mx, n;
cin>>n;
int a[n];
 mx=INT_MIN;
for(i=0;i<n;i++)
{
    cin>>a[i];

// if(a[i]>mx)
// {
//     mx=a[i];
// }
mx=max(mx,a[i]);
}
cout<<mx<<endl;
    return 0;
}