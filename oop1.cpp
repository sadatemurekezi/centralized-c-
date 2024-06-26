#include<iostream>
using namespace std;

class myClass
{
public:
int age;
string name;
};

int main(){
  myClass obj1;
  obj1.age=15;
  obj1.name="Sadate";

  myClass obj2;
  obj1.age=16;
  obj1.name=" Murekezi";

  myClass obj3;
  obj1.age=17;
  obj1.name="Rugamba";
  cout<<" My name is"<<obj1.name<<"and i have" <<obj1.age <<"in coding"<<endl;
  cout<<" My name is"<<obj2.name<<"and i have" <<obj2.age <<"in jog"<<endl;
  cout<<" My name is"<<obj3.name<<"and i have"<<obj3.age <<"in play "<<endl;
return 0;
}
