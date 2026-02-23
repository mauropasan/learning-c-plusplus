#include <iostream>
using namespace std;

int main()
{
  /*
    If we specify all the elements, we must
    declare the length of the array by declaring
    the array first
  */
  string cars[5];
  cars[0] = "Volvo";
  cars[1] = "BMW";
  cars[2] = "Ford";
  cars[3] = "Mazda";
  cars[4] = "Tesla";

  /*
    If we declare it first with no number and
    specify values, the compiler will determine
    automatically the length
  */
  string cars2[] = {"Volvo", "BMW", "Ford"};

  // We can add more cars in an array, but we'll look for it later on

  return 0;
}
