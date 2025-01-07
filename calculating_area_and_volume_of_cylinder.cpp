#include <iostream>
using namespace std;

int main()
{
    double const π = 3.14159265;

    double radius;
    cout << "Enter the radius of cylinder: ";
    cin >> radius;

    double height;
    cout << "Enter the height of cylinder: ";
    cin >> height;

    cout << "The area of Cylinder: " << 2 * π * radius * radius + 2 * π * radius * height <<"" <<endl;

    cout << "The volume of Cylinder: " << π * radius * radius * height << endl;

    return 0;
}