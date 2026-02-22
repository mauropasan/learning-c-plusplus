#include <iostream>
using namespace std;

int main()
{
  // Declaring a 2 dimension array
  string letters[2][4] = {
    { "A", "B", "C", "D" },
    { "E", "F", "G", "H" }
  };

  cout << letters[0][2] << endl;  // Outputs "C"

  // Declaring a 3 dimension array
  string letters2[2][2][2] = {
    {
      { "A", "B" },
      { "C", "D" }
    },
    {
      { "E", "F" },
      { "G", "H" }
    }
  };

  // Display all the characters iterating each array
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      for (int k = 0; k < 2; k++) {
        cout << letters[i][j][k] << endl;
      }
    }
  }

  return 0;
}
