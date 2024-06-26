#include<iostream>
using namespace std;

void myfunct(int array[4]){
for(int i=0; i<4; i++){
cout<<array[i];
}
}
int main(){
int mynumber[4]={2,4,6,7};
myfunct(mynumber);
return 0;

}