#include <iostream>
using namespace std;

void aFunction() {
  cout << "I just got executed!";
}

int main() {
  aFunction(); // Calls the function
  return 0;
}

// Shows "I just got executed!"

/*
  If a function is declared after the main function
  It will cause an error. However, you can declare
  the function before and define the function after
  the main function. E.g:

  void aFunction();

  int main() {
    aFunction()
  }

  void aFunction() {
    // Code here
  }
*/
