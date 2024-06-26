#include<iostream>
using namespace std;
string display(); //function declaration /prototype
int main()
{
  string s;
  // s=display();
  // cout<<s;
  cout<<display();
  return 0;
}
string display()        //function with return value without argument
{
  string name="Sadate";
  return name;           // return name, because display has string as return type.
}