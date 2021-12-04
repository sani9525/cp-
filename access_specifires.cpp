#include <bits/stdc++.h>
using namespace std;
 class Rectangle 
 {
private : 
int length;
int breadth;

 public :
 void setLength (int l)
 {
     if(l>0)
     length=l;

     length=0;
 }
 void setBreadth(int b)
 {
     if(b>0)
    breadth=b;

     breadth=0;
 }
 int getLength (){return length;  }
int getBreadth (){return breadth; }


int area ()
{
    return length*breadth;
}
int perimeter ()
{
    return 2*(length+breadth);
}

 };
 int main ()
 {
Rectangle r1;
r1.setLength(5);
r1.setBreadth(10);
cout<<r1.area()<<endl;

return 0;

 }