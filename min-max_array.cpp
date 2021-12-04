#include <iostream>
using namespace std;
int main (){
    int input[4];
    int sum=0;
    for(int i=0; i<5;i++){
        cin>>input[i];
        sum=sum+input[i];
    }
    cout<<sum<<endl;

}