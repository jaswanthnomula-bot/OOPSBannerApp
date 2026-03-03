#include<iostream>
using namespace std;
int main(){
  int columns,stars,spaces;
  cin>>columns;
  for(int i=1;i<=columns;i++){
    for(int j=1;j<=columns-i;j++){
        cout<<" ";
    }
    for(stars=1;stars<=2*i-1;stars++){
        cout<<"*";
    }
    cout<<endl;
  }
}