#include <iostream>
using namespace std;

int main()
{
    int age = 17;
    bool condition1 = age < 18;
    bool condition2 = age > 18;

    if (condition1) {
        cout << "Not an adult yet.";
    } else if (condition2) {
        cout << "Already an adult.";
    } else {
        cout << "Just made it to 18.";
    }
    return 0;
}
