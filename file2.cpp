#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
  //create and open file
ofstream File2("File.txt");
//write on the file
File2 <<"I am very happy to write thi program";
//closing file
File2.close();
// Create a text string, which is used to output the text file
string read_text;
ifstream File4 ("File.txt");

while (getline(File4, read_text)) {
  // Output the text from the file
  cout << read_text;
}
return 0;

}