/* #include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int *a=new int[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
int m;
cin>>m;
int *b=new int[m];
// for(int i=0;i<m;i++)
// {
//     cin>>b[i];
// }
for(int i=0;i<n&&i<m;i++)
{
  b[i]=a[i];  
}
delete[] a;
for(int i=n;i<m;i++)
{
    cin>>b[i];
}
for(int i=0;i<m;i++)
{
    cout<<b[i]<<" ";
}
    return 0;
} */
#include <iostream>

using namespace std;

int main() {
    int n;
    //cout << "Enter the size of array A: ";
    cin >> n;

    int* a = new int[n];

    //cout << "Enter the elements of array A: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int m;
    //cout << "Enter the size of array B: ";
    cin >> m;

    int* b = new int[m];

    //cout << "Enter the elements of array B: ";
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    int remaining = m - n;
    //cout << "Enter the remaining " << remaining << " elements of array B: ";
    for (int i = n; i < m; i++) {
        cin >> b[i];
    }

   
    for (int i = 0; i < m; i++) {
        cout << b[i] << " ";
    }
    cout << endl;

    delete[] a;
    delete[] b;

    return 0;
}
