#include <iostream>
using namespace std;

struct {
  int num;
  string text;
} structure;

int main()
{
  structure.num = 1;
  structure.text = "Hello World!";

  cout << structure.num << endl;
  cout << structure.text << endl;

  return 0;
}
