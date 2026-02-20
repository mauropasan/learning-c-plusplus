#include <iostream>
using namespace std;

int main()
{
    /*
      We can declare multiple variables
      in the same line, here's an example
      of declaring x, y and z
    */
    int x = 5, y = 10, z = 15;
    cout << x + y + z; // Displays the result of x + y + z (30)

    /*
      The other method to declare such variables,
      we can also declare them all first and then
      assign the same value to all of them
    */
    int a, b, c;
    a = b = c = 50; // a, b and c will be 50
    cout << a + b + c; // Displays the result of a + b + c (150)

    return 0;
}
