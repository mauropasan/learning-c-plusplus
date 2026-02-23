#include <iostream>
using namespace std;

int main()
{
    int numbers[5] = {10, 20, 30, 40, 50};
    cout << sizeof(numbers) << endl; // Will show 20, because it's the size in bytes

    // We can use the operation of the bytes size of numbers / size of the first element in array
    int getArrayLength = sizeof(numbers) / sizeof(numbers[0]);
    cout << getArrayLength << endl; // Will show 5

    // Looping in a array using for
    for (int i = 0; i < getArrayLength; i++) {
        cout << numbers[i] << endl;
    }

    // Looping with for each (recommended)
    for (int number : numbers) {
        cout << number << endl;
    }

    return 0;
}

/*
  Getting the size of the array can be useful for
  calculating an average.
*/
