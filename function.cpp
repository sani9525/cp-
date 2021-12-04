// #include <bits/stdc++.h>
// using namespace std;
// void display ()
// {
//     cout<<"Hello"<<endl;
// }
// int main ()
// {


// display ();
//     return 0;
// }


// add two numbers using funcation.......

// #include <bits/stdc++.h>
// using namespace std;

// float add(float x,float y)
// {
//     float z;
//     z=x+y;
//     return z;

// }

// int main ()
// {
//     float a=5.6,b=6.2,c;
// c=add(a,b);

// cout<<c<<endl;
// return 0;
// }



// Example of function to find Maximum of 3 number
// #include<iostream>
// using namespace std;
// int maxim(int a,int b,int c)
// {
// if(a>b && a>c)
// return a;
// else if(b>c)
// return b;
// else
// return c;
// }
// int main()
// {
// int a,b,c,d;
// cout<<"Enter three no.s ";
// cin>>a>>b>>c;
// d=maxim(a,b,c);
// cout<<"Maximum is "<<d<<endl;
// return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int max( int a ,int b,int c )
{
    if(a>b&&a>c)
    return a;
    else if (b>c)
    return b;
    else 
    return c;
}
int main ()
{
int a,b,c,d;
cout<<"Enter the value of A , B and C : ";
cin>>a>>b>>c;
d=max(a,b,c);
cout<<"Maximum number is : "<<d<<endl;

return 0;
}