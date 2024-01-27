#include<bits/stdc++.h>
using namespace std;
int main()
{
int N;
cin>>N;
int A[N];
int i,j,small;
for(i=0;i<N;i++)
{
    cin>>A[i];
}
for(i=0;i<N-1;i++)
{
    small=i;
    for(j=i+1;j<N;j++)
    {
        if (A[small]>A[j])
        { 
            small=j;
        }
    }
    
        //    int temp=A[i];
        //    A[i]=A[small];
        //    A[small]=temp;
        swap(A[small],A[i]);
        }

    

for(i=0;i<N;i++)
{
    cout<<A[i]<<" ";
}
    return 0;
}