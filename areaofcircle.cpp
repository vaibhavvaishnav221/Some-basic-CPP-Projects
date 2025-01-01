#include <iostream>
using namespace std;

int main ()
{
    float const π = 3.14159265;
    float r ;
    cout << " Enter the radius : ";
    cin >> r;

    string unit_of_r = "meter" ;

    float area = π * r * r ;

    cout << "The area of a circle" << " with a radius of " << r << " " << unit_of_r  << " is " << area << " sq. " << unit_of_r << "." << endl;
    
}