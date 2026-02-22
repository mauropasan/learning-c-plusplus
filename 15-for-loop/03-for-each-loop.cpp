#include <iostream>
using namespace std;

int main()
{
    int numbers[5] = {10, 20, 30, 40, 50};
    for (int number : numbers) {
        cout << number << endl;
    }
    return 0;
}

/*
  In for each loop, the first variable declares a variable
  that is used to identify each number in this case while
  the second is the array to go through
*/
