#include<iostream>
#include <typeinfo>
// using namespace std;
using std::cout;
int main()
{
char  ch = 'g';
std::cout<<"a is of type: "<<typeid(ch).name()<<std::endl;
// cout<<sizeof(ch)<<endl;
  return 0;
}