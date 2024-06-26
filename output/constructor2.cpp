#include<iostream>
using namespace std;

class construct{
  public:
  string a; 
  string b;

  construct(){
    cout<<"enter the name:";
    cin>>a;
    cout<<"Enter the second name:";
    cin>>b;
  }
};
int main(){
  construct c;
  cout<<c.a <<c.b;
  return 1;
}
