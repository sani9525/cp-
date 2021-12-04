#include<bits/stdc++.h>
using namespace std;
int g=5;

void fun()
{
    int g=120;
    {
         int g=89;
         cout<<g<<endl;
         g=g+11;
         cout<<g<<endl;
    }

    cout<<g<<endl;
}
int main ()
{
    cout<<g<<endl;
fun ();
g++;
cout<<g<<endl;
    return 0;
}