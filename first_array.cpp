#include <iostream>
using namespace std;
int main ()
{
    // take a array input from user 
    int n;
    cin >>n;

    int input[100];

    for(int i=0; i<n; i++){
        cin>>input[i];
    }
    // print the array of output
    for(int i=0; i<n; i++) {
        cout<<"output is : "<<input[i]<<endl;
    }

    // Largest element in the array
    int max=INT_MIN;
    for(int i=1; i<n; i++) {
        if(input[i]>max){
            max=input[i];
        }

    }
    cout<<"the maximum number of array is  : "<<max<<endl;

    return 0;
}