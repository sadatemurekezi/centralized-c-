#include<iostream>
using namespace std;
// Create a structure variable called myStructure
int main(){
struct{
  int num;
  string name;
  string surname;
  double contact;
}person;
// Assign values to members of myStructure
person.num=22;
person.name="sadate";
person.surname="Murekezi";
person.contact= 78.86 ;

// Print members of myStructure
cout<<"STUDENT IDENTIFICATION \n";
cout <<"My Reg number is:"<<person.num<<endl;
cout<<"My Name is :"<<person.name<<endl;
cout<<"My Surname is :"<<person.surname<<endl;
cout<<"My contact is :"<<person.contact;
return 0;
}
