#include <iostream>
using namespace std;

int main()
{
    string food = "Pizza";  // a string variable
    string* ptr = &food;    // pointer value of the memory address of food

    cout << ptr << endl;    // Prints the pointer
    cout << *ptr << endl;   // Prints the output value of food with the pointer (Pizza)
    return 0;
}
