#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int y = 9;
    cout << (x > y); // Returns 1 (true), because 10 is higher than 9
    cout << (x == 10); // Returns 1 (true), because x is equal to 10

    bool isGreater = x > y;
    cout << isGreater; // Returns 1

    return 0;
}

/*
  A real use case of booleans is to get two different scenarios:

  int myAge = 25;
  int votingAge = 18;

  if (myAge >= votingAge) {
    cout << "Old enough to vote!";
  } else {
    cout << "Not old enough to vote.";
  }

  In this case, will display: Old enough to vote!
*/
