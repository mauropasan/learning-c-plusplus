#include <iostream>
using namespace std;

int main()
{
    /*
      A good practice to identify variables is to use
      unique names, called identifiers. Here's a
      example of minutes per hour.
    */

    // Good case of identifier
    int minutePerHour = 60;

    // In this scenario, the programmer would struggle to understand what 'm' means
    int m = 60;

    return 0;
}

/*
  Rules for naming variables:
    1 - Can contain letters, digits and underscores
    2 - Must begin with a letter or underscore
    3 - Names are case-sensitive (myVar is not myvar)
    4 - Names cannot contain special characters like !, #, %, etc...
    5 - Reserved words (int, double, char...) can't be used as names
*/
