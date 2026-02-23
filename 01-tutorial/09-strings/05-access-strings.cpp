#include <iostream>
#include <string>
using namespace std;

int main()
{
    string txt = "Hello";
    cout << txt[0] << endl;                 // Outputs H
    cout << txt[txt.length() - 1] << endl;  // Outputs o

    txt[0] = 'J';           // Replaces 'H' with 'J'
    cout << txt << endl;    // Outputs Jello

    cout << txt.at(0);                  // Displays first character
    cout << txt.at(1);                  // Displays second character
    cout << txt.at(txt.length() - 1);   // Displays last character

    return 0;
}
