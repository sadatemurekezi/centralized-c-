#include<iostream>>
using namespace std;

class person{
  private:
  string name;
  int age;
public:
void setName(string n){
  name=n;
}
string getName(){
  return name;
}

void setAge(int x){
  if (age >0){
      age=x;
  }
 
}
int getAge(){
  return age;
}
void introduce(){
cout<<"I am with honor to welcome Mr."<<name<< "whose "<<age<<"of experience.";
}

};
int main(){
  person obj1;
  obj1.setName("kanyozi");
  obj1.setAge(12);
  obj1.introduce();
return 0;
}
