#include <iostream>
using namespace std;

int main()
{
    int x = 5;
    x < 5 && x < 10;    // Logical AND, returns if both statements are true
    x < 5 || x < 4;     // Logical OR, returns if one of the statements is true
    !(x < 5 && x < 10); // Reverse the result, returns false if the result is true
    return 0;
}
