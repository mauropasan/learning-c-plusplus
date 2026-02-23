#include <iostream>
using namespace std;

int main() {
  auto message = []() {
    cout << "Hello World!\n";
  };

  message();

  // Capture close
  int x = 10;
  auto calculate = [x]() {
      return x + 10;
  };
  cout << calculate() << endl;

  // Using parameters
  int y = 20;
  auto calc = [y](int x) {
    return x + y;
  };
  cout << calc(x) << endl;

  return 0;
}

/*
  Lambda functions allow us to make functions
  within the code, offers the same features
  like a function but additionally added a
  capture clause ([]) for letting variables
  from outside the lambda being called inside
*/
