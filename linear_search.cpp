#include <iostream>
using namespace std;
int main (){
int n;
cout<<"Enter that you want to search number : ";
cin>>n;

    int inputArray[10]={4,7,2,8,4,2,3,5,7,6};
    for(int i=0; i<10; i++){
       if(n==inputArray[i]){
       cout<<"index of "<<n<<" is : "<<i<<endl;
    }

 }
 return 0;

}