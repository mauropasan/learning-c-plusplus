#include <iostream>
using namespace std;

void countdown(int n) {
  if (n > 0) {
    cout << n << " ";
    countdown(n - 1); // We recursively call this function as long as n is higher than 0
  }
}

int main() {
  countdown(5);
  return 0;
}

/*
  We can call the same method within itself, a good example
  of using this is for a countdown.
*/
