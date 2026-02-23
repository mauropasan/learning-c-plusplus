#include <iostream>
using namespace std;

int main()
{
    /*
      Case 1: Usage or introducing data from a student
    */
    int studentID = 15;
    int studentAge = 23;
    float studentFee = 75.25;
    char studentGrade = 'B';

    cout << "Student ID: " << studentID << endl;
    cout << "Student Age: " << studentAge << endl;
    cout << "Student Fee: " << studentFee << endl;
    cout << "Student Grade: " << studentGrade << endl << endl;

    /*
      Case 2: Calculate the area of a rectangle
    */
    // Create integer variables
    int length = 4;
    int width = 6;

    // Calculate the area of the rectangle
    int area = length * width;

    // Print the variables
    cout << "Length is: " << length << endl;
    cout << "Width is: " << width << endl;
    cout << "The area is: " << area << endl;

    return 0;
}
