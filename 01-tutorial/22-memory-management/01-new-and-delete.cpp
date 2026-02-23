#include <iostream>
using namespace std;

int main()
{
  int* ptr = new int; // Creates a new memory space for the variable
  *ptr = 35;          // Uses a pointer to declare the variable
  cout << *ptr;       // Prints the value
  delete ptr;         // Removes from memory the variable (important for releasing memory)

  // Using it on an array
  int numGuests;
  cout << "How many guests? ";
  cin >> numGuests;

  // Check for invalid input
  if (numGuests <= 0) {
    cout << "Number of guests must be at least 1.\n";
    return 0;
  }

  // Create memory space for x guests (an array of strings)
  string* guests = new string[numGuests];

  // Ignore the leftover newline character after reading numGuests
  cin.ignore();

  // Enter guest names
  for (int i = 0; i < numGuests; i++) {
    cout << "Enter name for guest " << (i + 1) << ": ";
    getline(cin, guests[i]); // Read the full name (including spaces)
  }

  // Show all guests
  cout << "\nGuests checked in:\n";
  for (int i = 0; i < numGuests; i++) {
    cout << guests[i] << "\n";
  }

  delete[] guests; // Clean up memory
  return 0;
}
