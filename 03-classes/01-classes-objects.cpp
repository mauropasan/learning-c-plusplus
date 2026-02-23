#include <iostream>
using namespace std;

class MyClass {       // The class
  public:             // Access specifier
    int myNum;        // Attribute (int variable)
    string myString;  // Attribute (string variable)
};

int main() {
  MyClass myObj; // Create an object of MyClass

  // Access attributes and set values
  myObj.myNum = 15;
  myObj.myString = "Some text";

  // Print attribute values
  cout << myObj.myNum << endl;
  cout << myObj.myString << endl;

  // We can create another object of the same class
  MyClass myObj2;

  myObj2.myNum = 20;
  myObj2.myString = "Some other text";

  cout << myObj2.myNum << endl;
  cout << myObj2.myString << endl;
  return 0;
}
