#include <iostream>
using namespace std;

int main()
{
    int x = 0;

    while (x < 5) {
        cout << x << endl;
        // Code to execute while x is less than 5
        x++; // We use addition to refresh the variable, by not doing this it will cause an infinite loop
    }
    return 0;
}
