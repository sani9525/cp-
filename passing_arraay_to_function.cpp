#include <iostream>
using namespace std;
void printArray(int input[],int n){
    for(int i=0; i<n; i++){
        cout<<input[i]<<endl;;
    }
}
int main (){
    int input[100]={1,2,3};
    printArray(input,100);

}