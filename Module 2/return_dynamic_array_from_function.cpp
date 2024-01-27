#include<bits/stdc++.h>
using namespace std;
int i;
int* fun()
{
    int *a=new int[5];
    for(i=0;i<5;i++)
    {
cin>>a[i];
    }
    return a;
}
int main()
{ 
int *a=fun();
for(i=0;i<5;i++)
    {
cout<<a[i]<<" ";
    }
    cout<<endl;
    delete[] a;
    for(i=0;i<5;i++)
    {
cout<<a[i]<<" ";
    }

    return 0;
}

