#include <bits/stdc++.h>
using namespace std;
void printArray(int input[],int n){
    // cout<<"Function : "<<sizeof(input)<<endl;
    cout<<"print : "<<endl;
    for(int i=0; i<n; i++){
        cout<<input[i]<<" ";
    }
    cout<<endl;
}

int main () {
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int input[n];
    cout<<"Enter the array elements : ";
    cout<<input<<endl;
    for (int i=0; i<n; i++){
        cin>>input[i];
    }
    printArray(input ,n);

}

    