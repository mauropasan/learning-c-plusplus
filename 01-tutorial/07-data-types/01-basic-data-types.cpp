#include <iostream>
using namespace std;

int main()
{
    int num = 5;                // Integer (whole number
    float floatNumber = 5.99;   // Float point number
    double doubleNumber = 5.98; //Floating point number
    char letter = 'A';          // Character
    bool boolean = true;        // Boolean
    string text = "Hello";      // String
    auto x = 10;                // Determines the type through the assigned variable
    return 0;
}

/*
  The main difference between float and double
  is that float is 6/7 decimal digits, while
  double is 15. Therefore double is safer to use
  for most calculations.

  int: allows you to use a whole number.
  e. g. 10, 90, 1000, 5000...

  float: uses decimal numbers up to 6 or 7 decimals.
  E . g. 20.30, 10.90, 99.99...

  double: same as float, but up to 15 decimals.

  boolean: uses true or false (which means 1 or 0)

  char: a single character can be used.
  E. g. 'a', 'D', 'F'...

  string: it's a sequence of characters, allowing
  you to use multiple characters within.
  E. g. "Hello", "World", "C++"...

  auto: detects automatically the type that is assigned
  through the assigned variable, meaning it can be any
  of the previous mentioned.
  E. g.

  You can assign the value in the same line
  auto x = 10; <- This will be assigned as an int

  or

  Declare the variable first and then detect it later on
  auto x;               <- Only declares the variable
  x = "Hello World";    <- x will be assigned as a string
*/
