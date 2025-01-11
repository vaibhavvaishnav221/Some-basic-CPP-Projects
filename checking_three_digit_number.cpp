#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    (n < 1000 and n > 99) ? cout << n << " is a three digit number.\n" : cout << n << " is not a three digit number.\n";

    return 0;
}