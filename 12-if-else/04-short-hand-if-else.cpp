#include <iostream>
using namespace std;

int main()
{
    int age = 18;
    string result = age < 18 ? "Not an adult yet." : "Already an adult.";

    // Helpful for three different conditions
    string resultTernary = (age < 18) ? "Not an adult yet."
    : (age > 18) ? "Already an adult."
    : "Just made it to the 18.";

    cout << result << endl;
    cout << resultTernary;
    return 0;
}
