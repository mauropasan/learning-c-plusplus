#include <iostream>
using namespace std;

struct Car {
  string brand;
  int year;
};

void aFunction(Car c) {
  cout << "Brand: " << c.brand << ", Year: " << c.year << endl;
}

int main(){
    Car myCar = {"Toyota", 2020};
    aFunction(myCar);
    return 0;
}

/*
  In this case, the function gets a value, so it will get a copy
  of the value, if we want to change the original variable, we
  need to pass it as reference by doing this:
  void aFunction (Car &c) {}
*/
