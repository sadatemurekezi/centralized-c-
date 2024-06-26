#include<iostream>
using namespace std;

class myPerson {
  public:
  // Attributes
  string name;
  int age;
   // Method
  void introduce(){
    cout<<"My name is:"<<name<< "I am "<<age <<"years old.";
  }
};
// Creating an object of the class Person
 int main(){
 myPerson obj;
 obj.name = "kamanzi";
 obj.age=12;
 obj.introduce();
return 0;
 }