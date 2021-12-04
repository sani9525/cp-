#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int A[]={4,8,6,9,5,2,7};
    int i,max;
    max = A[0];
    cout<<max<<endl;
    for (i=0; i<7; i++)
    {
     if (A[i]>max)
     {
         max=A[i];

     }
    }
     cout<<"maximum number is : "<<max<<endl;
    
    return 0;
}