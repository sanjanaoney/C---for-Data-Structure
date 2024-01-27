#include<bits/stdc++.h>
using namespace std;
int main()
{
int i;
int *a=new int[5];
for(i=0;i<5;i++)
{
    cin>>a[i];
}
int b[7];
for(i=0;i<7;i++)
{
    b[i]=a[i];
}
b[5]=60;
b[6]=70;
for(i=0;i<7;i++)
{
    cout<<b[i]<<" ";
}
cout<<endl;
delete[] a;
for(i=0;i<5;i++)
{
    cout<<a[i]<<" ";
}

return 0;


    return 0;
}