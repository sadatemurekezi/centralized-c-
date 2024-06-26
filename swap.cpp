#include<iostream>
using namespace std;
  void swpnum( int &x, int &y){
int z=x;
    x=y;
    y=z;
  }
  int main(){
    int num1=11;
    int num2=22;
    cout<<"before swap:\n";
    cout<<num1<<"\t"<<num2<<endl;
    
  // Call the function, which will change the values of Num1 and Num2
  swpnum(num1,num2);

  cout<<"After swap:\n";
  cout<<num1<<"\t"<<num2<<endl;
  return 0;

  }