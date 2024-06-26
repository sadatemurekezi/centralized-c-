#include<iostream>
using namespace std;

int myfunction(int x, int y){

   return x%y;
}
int main(){
  cout<<myfunction(6, 5);
  return 0;
}