#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter a number : ";
    cin >> a;

    int b;
    cout << "Enter a number : ";
    cin >> b;

    cout << "Sum of " << a << " and " << b << " is " << a + b << "." << endl;
    cout << "Difference of " << a << " and " << b << " is " << a - b << "." << endl;
    cout << "Multiplicaton of " << a << " and " << b << " is " << a * b << "." << endl;
    cout << "Division of " << a << " and " << b << " is " << a / b << "." << endl;

    cout << "SUM : " << a + b << endl;
    cout << "DIFFERENCE : " << a - b << endl;
    cout << "MULTIPLICATION : " << a * b << endl;
    cout << "DIVISION : " << a / b << endl;
}