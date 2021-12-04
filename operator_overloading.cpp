#include <bits/stdc++.h>
using namespace std;

class complex 
{
    public :
    int real;
    int img;

    complex add(complex  c)
    {
      complex temp;
      temp.real=real+c.real;
      temp.img=img + c.img;
   return temp;
    }
};

int main ()
{
   complex c1,c2,c3;
   c1.real=5;c1.img=6;
   c2.real=4;c2.img=8;
   c3=c1.add(c2);

   cout<<c3.real<<" +i"<<c3.img<<endl;

    return 0;
}