#include <bits/stdc++.h>
using namespace std;
class base 
{
	public :
	void display ()
	{
		cout<<"Display of base"<<endl;
	}

};

class Derived : public base
{
public:
	void display ()
	{
		cout<<"display of derived"<<endl;
	}
	
};
int main ()
{
	Derived d;
d.display ();

	return 0;
}