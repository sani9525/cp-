#include <bits/stdc++.h>
using namespace std;

class basicCar
{
    public :
    void start() {cout<<"basicCar started "<<endl;}
};
class AdvancedCar : basicCar
{
    public :
    void start(){ cout<<"AdvancedCar started"<<endl;  }
};

int main ()
{
basicCar *p=new AdvancedCar();
 p->start ();

    return 0;
}
