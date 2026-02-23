#include <iostream>
using namespace std;

class MyClass {       // The class
  public:             // Access specifier
    void myMethod() {
      cout << "Hello world!" << endl;
    }
    void myMethod2(); // Declaring the method
};

// Defining the method/function outside the class
void MyClass::myMethod2() {
  cout << "Hello world!" << endl;
}

// Using parameters
class Car {
  public:
    int speed(int maxSpeed); // Declares method with parameter
};

// Defines method with the parameter
int Car::speed(int maxSpeed) {
  return maxSpeed;
}

int main() {
  MyClass myObj;      // Create an object of MyClass
  myObj.myMethod();   // Call the method
  myObj.myMethod2();  // Call the method

  Car car;
  cout << car.speed(200);
  return 0;
}
