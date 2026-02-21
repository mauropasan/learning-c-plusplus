#include <iostream>
using namespace std;

int main()
{
    int num = 15; // Number without decimals
    double decimal = 1.50 // Numbers with decimals
    char letter = 'A'; // Character
    string text = "Hello World!"; // Text
    bool boolean = true; // Boolean (true or false)

    // Modifying "num" during execution
    num = 10;
    cout << num; // Will print 10 instead of 15 due being changed previously

    // Adding variables together
    int x = 5;
    int y = 10;
    int sum = x + y;
    cout << sum; // Displays the result of x + y (5 + 10, which will output 15)

    return 0;
}
