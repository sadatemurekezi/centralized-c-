// defining the constructor outside the class
#include<iostream>
using namespace std;

class student{
      int RegNo;
    char Name;
    double fees;

    public:  // constructor declaration only
    student();
    void display();
    
};      
// outside definition of constructor
student::student(){
  cout<<"Enter the reg number:";
  cin>>RegNo;
  cout<<"Enter the student name:";
  cin>>Name;
  cout<<"Enter the fees:";
  cin>>fees;

}
void student::display(){
  cout<<RegNo <<Name  <<fees ;
}
// driver code
int main(){
 student s;
 s.display();
 return 0;
}