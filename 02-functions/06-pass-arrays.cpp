#include <iostream>
using namespace std;

void aFunction(int numbers[5]) { // We need to specify the array length
  for (int i = 0; i < 5; i++) {  // Iterates through the array passed in the parameter
    cout << numbers[i] << endl;  // Displays each number from the array
  }
}

int main() {
  int numbers[5] = {10, 20, 30, 40, 50};
  aFunction(numbers);
  return 0;
}
