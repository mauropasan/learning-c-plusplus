#include <iostream>
using namespace std;

int main()
{
    bool condition = true;
    if (condition) {
        // Will execute if condition is true
    } else {
        // Will execute if condition is false
    }

    int time = 18; // We can use isDay for better undestanding
    if (time < 18) {
        cout << "Good day.";
    } else {
        cout << "Good evening.";
    }

    return 0;
}
