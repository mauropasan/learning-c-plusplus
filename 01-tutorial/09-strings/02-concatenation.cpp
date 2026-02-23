#include <iostream>
#include <string>
using namespace std;

int main()
{
    string firstName = "John ";
    string lastName = "Doe";
    string fullName = firstName + lastName;
    /*
      We can also use append() function:
      firstName.append(lastName);
    */
    cout << fullName;
    return 0;
}
