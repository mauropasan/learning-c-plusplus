#include <iostream>
using namespace std;

void aFunction(string fname) {
  cout << fname << " Refsnes\n";
}

int main() {
  aFunction("Liam");    // Liam Refsnes
  aFunction("Jenny");   // Jenny Refsnes
  aFunction("Anja");    // Anja Refsnes
  return 0;
}

/*
  For multiple variables, we can do this:
  void aFunction(string fname, int age) {
    cout << "Name: " << fname << " Refsnes\n";
    cout << "Age: " << age << endl;
  }

  int main() {
    aFunction("Liam", 3);
    aFunction("Jenny", 14);
    aFunction("Anja", 30);
    return 0;
  }
*/
