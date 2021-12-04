#include <iostream>
using namespace std;
int max(int a,int b,int c=18)
{
    return a>b & a>c ? a: (b>c ? b: c);
}

int main ()
{
cout<<max(13,5)<<endl;
cout<<max(4,7,3)<<endl;
cout<<max(20,6)<<endl;

    return 0;
}