#include <iostream>
using namespace std;

int main()
{
    int result1 = 2 + 3 * 4;    // 2 + 12 = 14
    int result2 = (2 + 3) * 4;  // 5 * 4 = 20
    return 0;
}

/*
  This is the priority order using the most common
  operators in C++:
  1. ()             - Parentheses
  2. *, /, %        - Multiplication, Division, Modulus
  3. +, -           - Addition, Substraction
  4. >, <, >=, <=   - Comparison
  5. ==, !=         - Equality
  6. &&             - Logical AND
  7. ||             - Logical OR
  8. =              - Assignment
*/
