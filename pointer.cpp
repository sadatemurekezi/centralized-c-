#include<iostream>
using namespace std;
int main() {
    int a[3][3] = {{10,20,30},{2,3,4},{1,0,7}};
    int *p = &a[3][3];// p is a pointer to an integer,storing the address of a
    cout <<"Value of a is: "<< a[1][0]<<endl;
    cout<<"Address of a is: "<<*p<<endl;
    cout<<"Value at the address stored in p is : "<<p<<endl;
    return 0;
}
