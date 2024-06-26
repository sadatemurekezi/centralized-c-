#include <iostream>
#include <string>
using namespace std;

int main() {
  string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ :";
  string txt2="Sadate";
  // cout << "The length of the txt string is: " << txt.length();
  // cout << "The size of the txt string is: " << txt.size();
  cout << "The size of the txt string is: " << txt.append(txt2);


  return 0;
}