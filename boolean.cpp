#include<iostream>
using namespace std;

int main(){

  // bool b=false;
  void *ptr;
  int x=10;
  ptr=&x;
  cout<<*(int*)ptr<<endl; //type cast

  // cout<<"The character b is: "<< b<<endl;
  // float y=12.5;
  // float z=true+x-true+y;
  // cout<<z<<endl;

  return 0;
}