#include <iostream>
using namespace std;
class Rectangle 
{
    public : 
    int length;
   int breadth;
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
    cout<<"Enter the value of length : ";
    cin>>r1.length;
    cout<<endl;
    cout<<"Enter the value of breadth : ";
    cin>>r1.breadth;

cout<<"Area is : "<<r1.area()<<endl;
cout<<"perimeter is : "<<r1.perimeter ()<<endl;

return 0;
}
