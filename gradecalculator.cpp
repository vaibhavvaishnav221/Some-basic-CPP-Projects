#include <iostream>
using namespace std;

int main ()
{
    int x;
    cout << "Enter a number : ";
    cin >>x;

    if ( x > 100) cout << "Invalid Marks" << endl;
    if ( x >= 91 and x <= 100) cout << "A+" << endl;
    if ( x >= 81 and x <= 90) cout << "A" << endl;
    if ( x >= 71 and x <= 80) cout << "B" << endl;
    if ( x >= 61 and x <= 70) cout << "C" << endl;
    if ( x >= 51 and x <= 60) cout << "D" << endl;
    if ( x >= 00 and x <= 50) cout << "E" << endl;

}
