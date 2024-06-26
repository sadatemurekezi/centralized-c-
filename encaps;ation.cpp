#include<iostream>
using namespace std;

class employee{

private:
 int salary;
public:
void setsalary(int s){
  salary=s;
}
int getsalary(){
  return salary;
}
};
int main(){
employee obj1;
obj1.setsalary(500);
cout<<"My salary is: "<<obj1.getsalary();
return 0;

}