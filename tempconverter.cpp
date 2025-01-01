#include <iostream>
using namespace std;

int main()
{
    double temp;
    cout << "Enter temperature : ";
    cin >> temp;
    char unit;
    cout << "Enter unit : ";
    cin >> unit;

    if (unit == 'C' || unit == 'c')
    {
        cout << "The temperature is " << temp + 273.15 << " K" << "." << '\n';
    }

    else if (unit == 'K' || unit == 'k')
    {
        cout << "The temperature is " << temp - 273.15 << " °C" << "." << '\n';
    }

    else
    {
        cout << "Enter units either K or C." << '\n';
    }
}