#include <iostream>
using namespace std;

int main()
{
    int a = 33;
    int b = 200;
    int c = 500;

    if (a > b && c > a) {
        // Execute if both conditions given are true
    }

    if (a > b || c > a) {
        // Execute if any of the conditions is true
    }

    if (!(a > b)) {
        // Execute only if the condition is the opposite
        /*
         if a is higher than b, will NOT execute
        */
    }
    return 0;
}
