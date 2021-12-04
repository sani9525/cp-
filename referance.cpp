#include <iostream>
using namespace std;
int main ()
{
int a=5;
int &v=a;
cout<<"value of x is : "<<a<<endl;;
    v++;
    a++;
    cout<<a<<endl;
    return 0;
}