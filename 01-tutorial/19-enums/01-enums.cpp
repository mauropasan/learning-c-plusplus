#include <iostream>
using namespace std;

// Declaring a enum
enum Level {
  LOW,
  MEDIUM,
  HIGH
};

enum Difficulty {
  EASY = 25,
  NORMAL = 50,
  HARD = 75
};

enum Case {
  FIRST = 1,
  SECOND,   // Will be 2
  THIRD     // Will be 3
};

int main()
{
    // Declaring Level enum
    enum Level level = MEDIUM;
    enum Difficulty difficulty = NORMAL;

    cout << level << endl; // Will display 1, represents MEDIUM
    cout << difficulty << endl; // Will display 50

    enum Case caseEnum = FIRST;

    switch(caseEnum) {
      case 1:
        cout << "First case";
        break;
      case 2:
        cout << "Second case";
        break;
      case 3:
        cout << "Third case";
        break;
      default:
        cout << "No cases selected";
    }

    return 0;
}
