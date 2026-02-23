#include <iostream>
using namespace std;

void aFunction(string country = "Norway") {
  cout << country << endl;
}

int main() {
  aFunction("Sweden");
  aFunction("India");
  aFunction(); // Will show Norway when none specified
  aFunction("USA");
  return 0;
}
