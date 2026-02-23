#include <iostream>
using namespace std;

class Dog {
  public:
    void bark();
};

void Dog::bark() {
  cout << "Woof!";
}

int main() {
  Dog dog;
  dog.bark();
  return 0;
}
