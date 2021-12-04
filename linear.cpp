#include <bits/stdc++.h>
using namespace std;
int main ()
{
int A[10],n=10,key;
cout<<"Enter the Array : ";

for (int i=0; i<n; i++)
{
    cin>>A[i];
}
cout<<"Enter the keys: ";
cin>>key;

for (int i=0; i<n; i++)
{
    if(key==A[i])
    {
        cout<<"found at : "<<i<<endl;
        return 0;
    }
}
cout<<"Not found : "<<endl;

    return 0;
}