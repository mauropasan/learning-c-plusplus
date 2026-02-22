#include <iostream>
using namespace std;

int main()
{
  for (int i = 0; i < 10; i++) {
    if (i == 4) {
      break; // break skips only one interaction
    }
    cout << i << "\n";
  }

  for (int i = 0; i < 10; i++) {
    if (i == 4) {
      continue; // continue skips the rest of the loop
    }
    cout << i << "\n";
  }
  return 0;
}
