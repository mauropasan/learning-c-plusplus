#include <iostream>
using namespace std;

int aFunction(int x) {
  return x + 5;
}

int aFunction(int x, int y) {
  return x + y + 5;
}

double aFunction(double x) {
  return x + 10.20;
}

double aFunction(double x, double y) {
  return x + 15.90;
}

int main()
{
    cout << aFunction(10) << endl;
    cout << aFunction(10, 20) << endl;
    cout << aFunction(20.10) << endl;
    cout << aFunction(30.10, 28.30);
    return 0;
}

/*
  Overloading stands for using the name when declaring different
  functions with different return types or even using more parameters
*/
