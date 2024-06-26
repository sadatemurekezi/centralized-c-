#include<iostream>
using namespace std;

void greet()
{
  cout<<"Hi"<<endl;
}
void display()
{
  cout<<"I am in display function"<<endl;
  greet();
  cout<<"I am exist display function";
}
int main()
{
 //greet();
 display();
 return 0;
}
