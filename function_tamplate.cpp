#include <bits/stdc++.h>
using namespace std;

template <class T>

T maxim(T a , T b)
{
    if (a>b)
    return a;
    else 
    return b;
}
int main ()
{
    cout<<maxim(3,6)<<endl;
    cout<<maxim(3.6,4.7)<<endl;
    cout<<maxim(4.6f,2.4f)<<endl;
    return 0;

}

