#include <iostream>
using namespace std;

int main()
{
    int x, y; // Declare two empty variables
    int sum; // Declare result variable
    cout << "Type a number: "; // Ask user for input
    cin >> x; // Save first number into x
    cout << "Type another number: "; // Ask user for second input
    cin >> y; // Save second number into y
    sum = x + y; // Do the operation with x and y
    cout << "Sum is: " << sum; // Display result
}
