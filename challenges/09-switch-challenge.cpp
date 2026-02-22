#include <iostream>
using namespace std;

int main()
{
  int choice = 1;

  switch (choice) {
    case 1:
      cout << "You ordered Coffee";
      break;

    case 2:
      cout << "You ordered Tea";
      break;
    default:
      cout << "Invalid choice";
  }

  return 0;
}
