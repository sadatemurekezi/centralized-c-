#include<iostream>
using namespace std;
// parent class
class Grandpa{
  public:
  void myfunction(){
    cout<<"I am grand pa of two children:";
  }
};
// /derived class /child class(child)
class Son:public Grandpa{

};
// c/derived class/ child class(grandchild)
class grandson:public Son{

};
int main(){
grandson obj1;
obj1.myfunction();
return 0;

}