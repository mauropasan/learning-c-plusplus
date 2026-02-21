#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int y = 3;

    cout << (x + y) << endl // 13
    cout << (x - y) << endl // 7
    cout << (x * y) << endl // 30
    cout << (x / y) << endl // 3 (integer division)
    cout << (x % y) << endl // 1

    int z = 5;
    ++z;                // Increments z by 1
    cout << z << endl;  // 6
    --z;                // Decrements z by 1
    cout << z << endl;  // 5
    return 0;
}
