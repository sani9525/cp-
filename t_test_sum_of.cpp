#include <bits/stdc++.h>
using namespace std;

int mai ()
{

int n;
cout<<"Enter the number : ";
cin>>n;
int digit_sum=0;

while (n>0)
{
    int last_digit=n%10;
    digit_sum=digit_sum+last_digit;
    n=n/10;

}
cout<<digit_sum<<endl;

    return 0;
}