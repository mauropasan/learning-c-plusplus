#include <iostream>
#include <string>
using namespace std;

int main()
{
    string firstName;
    cout << "Type your first name: ";       // Prompt user to type a name
    cin >> firstName;                       // firstName will contain the input the user typed
    // Usually is better using getline(cin, firstName)
    cout << "Your name is: " << firstName;  // Displays the name that the user inputed
    return 0;
}

/*
  We use the function getline(cin, firstName) to read names
  When using cin, it will cut with a blank space since it's considered
  as a terminating character.
  cin: The best way to store a single word
  getline(cin, string): Used in general for strings
*/
