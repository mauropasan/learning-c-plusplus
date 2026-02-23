#include <iostream>
using namespace std;

// This function indicates that is returning an Integer
int aFunction(int x) {
  return 5 + x;
}

int main() {
  cout << aFunction(3); // It will display the return of the function
  return 0;
}

// Will show 8 (5 + 3)

/*
  We can also modify the function so we use two parameters
  to use addition on both of them. E.g.:
  aFunction(int x, int y) {
    return x + y;
  }
*/
