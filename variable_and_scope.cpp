#include <bits/stdc++.h>
using namespace std;
int fact(int n){
int ans=1;
for(int i=1; i<n; i++){
 ans=ans*i;
  }
return ans;
}

int main (){
int n;
cin>>n;
int output =fact(n);
cout<<output<<endl;

}