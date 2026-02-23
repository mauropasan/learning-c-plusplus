#include <iostream>
using namespace std;

int main()
{
    // The character \n inserts a new line
    cout << "1. Hello World \n";
    // The operator << can also be used to split \n
    cout << "2. Hello World" << "\n";
    // We can use \n\n to create a blank line
    cout << "3. Hello World" << "\n\n";
    // We can use "endl" manipulator de create a new line as well
    cout << "4. Hello World" << endl;
    cout << "I am learning C++";
    return 0;
}

/*
Other characters we can use are:
\t - Creates a tabulation
\\ - Inserts a backslash character
\" - Inserts double quote character
*/
