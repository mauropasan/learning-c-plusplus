#include <iostream>
using namespace std;

int main()
{
    int x = 15;
    int y = 25;

    if (x > 10) {
        cout << x << " is greater than 10" << endl;
        if (y > 20) {
            cout << y << " is greater than 20" << endl;
        }
    }
    return 0;
}

/*
  In some real cases, this is needed when one condition is true
  which is mandatory to comply and then another condition is made
  within the first one.
*/
