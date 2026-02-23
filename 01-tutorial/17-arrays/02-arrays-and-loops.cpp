#include <iostream>
using namespace std;

int main()
{
  string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};
  for (int i = 0; i < 5; i++) {
    cout << i << " = " << cars[i] << endl; // Each time this outputs cars
  }

  int numbers[5] = {10, 20, 30, 40, 50};
  for (int i = 0; i < 5; i++) {
    cout << numbers[i] << endl; // Iterates each number displaying them
  }

  int numbers2[5] = {10, 20, 30, 40, 50};
  for (int number : numbers2) {
    cout << number << endl; // Displays each number
  }

  return 0;
}
