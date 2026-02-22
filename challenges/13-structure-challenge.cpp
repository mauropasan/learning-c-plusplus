#include <iostream>
using namespace std;

struct {
  string name;
  int age;
  char grade;
} task;

int main() {
  task.name = "Liam";
  task.age = 35;
  task.grade = 'A';

  cout << "Name: " << task.name << endl;
  cout << "Age: " << task.age << endl;
  cout << "Grade: " << task.grade << endl;
  return 0;
}
