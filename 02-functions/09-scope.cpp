#include <iostream>
using namespace std;

int global = 10;

void aFunction() {
  int local = 20;
}

int main() {
    // We can call global here
    global += 10;
    // If we try to call local, it will cause an error
    local +=20;
    return 0;
}

/*
  When using local variables, it only will be used
  inside the function where is declared, on the other hand,
  using a global variable can be used anywhere
*/
