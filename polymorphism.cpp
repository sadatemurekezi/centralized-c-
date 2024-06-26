#include<iostream>
using namespace std;

class Animal
{
public:
void animalsound(){
    cout<<"Animal make sound"<<endl;
  }
};

class pig: public Animal{
  public:
  void animalsound(){
    cout<<"1.Pig is oinking"<<endl;

  }
};
 class dog:public Animal{
  public:
  void animalsound(){
    cout<<"2.The dog back seldom bite"<<endl;
  }
};
class cat:public Animal{
  public:
  void animalsound(){
    cout<<"3.The cat meow"<<endl;
  }
};
int main(){
  cout<<"--------------------"<<endl;
  cout<<"THE ANIMAL BEHAVIOR."<<endl;
  cout<<"--------------------"<<endl;
  Animal myAnimal;
  pig mypig;
  dog mydog;
  cat mycat;

  myAnimal.animalsound();
  mypig.animalsound();
  mydog.animalsound();
  mycat.animalsound();

  return 0;

}