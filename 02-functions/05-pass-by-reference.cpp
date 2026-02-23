#include <iostream>
using namespace std;

void changeValue(int &num) {
  num = 50;
}

int main() {
  int value = 10;
  changeValue(value); // Call the function and changes value to 50
  cout << value;
  return 0;
}

/*
  This can also be applied for multiple parameter, e.g.:
  void swapNums(int &x, int &y) {
    int z = x;
    x = y;
    y = z;
  }

  int main() {
    int firstNum = 10;
    int secondNum = 20;

    cout << "Before swap: " << "\n";
    cout << firstNum << secondNum << "\n";

    // Call the function, which will change the values of firstNum and secondNum
    swapNums(firstNum, secondNum);

    cout << "After swap: " << "\n";
    cout << firstNum << secondNum << "\n";

    return 0;
  }
