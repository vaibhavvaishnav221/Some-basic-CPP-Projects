#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double perpendicualr;
    cout << "Enter the value of perpendicualr : ";
    cin >> perpendicualr;

    double base;
    cout << "Enter the value of base : ";
    cin >> base;

    string unit = "cm";

    cout << "The value of hypotenuse is : " << sqrt(pow(perpendicualr, 2) + pow(base, 2)) << " " << unit << '\n';
}