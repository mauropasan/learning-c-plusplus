#include <iostream>
using namespace std;

int main()
{
    string food = "Pizza";  // a string variable
    string* ptr = &food;    // pointer value of the memory address of food

    cout << food << endl;   // Prints "Pizza"
    cout << &food << endl;  // Prints memory address of food
    cout << ptr << endl;    // Prints the pointer
    return 0;
}
