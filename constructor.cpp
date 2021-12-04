#include <bits/stdc++.h>
using namespace std;

class Rectangle 
{
    private :
   int  length;
   int  breadth;

    public : 

    Rectangle ()
    {
        length=1;
        breadth=1;
    }
    Rectangle (int l,int b)
    {
        setLength(l);
        setBreadth(b);
    }

    void setLength (int l)
{
    length =l;
}
void setBreadth (int b)
{
    breadth=b;
}

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
    Rectangle r1(10,5);
    Rectangle r2(r1);

    cout<<"the Rectangle is : "<<r2.area ()<<endl;
    cout<<"the perimeter is : "<<r1.perimeter ()<<endl;


    return 0;
}