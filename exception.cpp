#include<iostream>
using namespace std;

int main(){
try{
int age;
cout<<"Enter the age :";
cin>>age;
if (age > 18){
  cout<<"Access granted - you are old enough.";
  }else{
throw (age);
  }
}
catch(int num){
  cout<<"Access dined. You are below  18 year old."<<endl;
  cout<<"Your Age is :" <<num;
}
return 0;
}
