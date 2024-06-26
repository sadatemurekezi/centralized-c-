#include<iostream>
using namespace std;

void myfunction();
void calculation();

int main(){
myfunction();
calculation();
return 0;
}
void myfunction(){
  int a;
  int b;
  int sum;
  cout <<"enter the value of a:";
  cin>>a;
  cout <<"enter the value of a:";
  cin>>b;
  sum=a*b;
  cout<<"The production of two number is :"<<sum<<endl;
}
void calculation(){
  int array[3]={1,3,7};
  cout<<"the array number are: \n"<<array[0]<<"\t"<<array[1]<<"\t"<<array[2]<<endl;
}
