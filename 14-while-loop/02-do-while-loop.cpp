#include <iostream>
using namespace std;

int main()
{
    int x = 0;

    do {
        // Code to execute while x is less than 5
        cout << x << endl;
        x++;
    }
    while(x < 5);
    return 0;
}

/*
  The difference between while and do while is that while
  will check first if the condition is made and then
  execute the code, do while does the opposite.
  This means that do while will guaranteed to execute at least once
*/
