#include <iostream>
#include <string>
using namespace std;

int main()
{
    string x = "20";
    string y = "20";
    string z = x + y;
    cout << z; // Will display 2020
    // You can not use string + int, it will cause an error.
    return 0;
}
