#include <iostream>
using namespace std;

int main()
{
    string food = "Pizza";  // food variable
    string &meal = food;    // reference to food
    // meal is a direct reference of food, which both are the same

    cout << food << endl;   // Shows Pizza
    cout << meal << endl;   // Shows Pizza

    // If we change the reference, it will change both reference and variable
    meal = "Burger";

    cout << food << endl;   // Shows Burger
    cout << meal << endl;   // Shows Burger

    return 0;
}
