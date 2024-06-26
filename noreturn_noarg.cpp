#include<iostream>     // function no return type and no argment
using namespace std;

void display();
int main(){
display();
return 0;//if a fuction not returning anything you can not call it directli in cout
}
void display(){
  cout<<"Hi Janny";
  return;
}