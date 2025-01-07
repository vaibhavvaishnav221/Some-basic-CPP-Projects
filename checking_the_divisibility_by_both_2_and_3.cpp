#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n % 2 == 0 && n % 3 == 0)
    {
        cout << "Number is divisible by both 2 and 3.\n";
    }
    if (n % 2 != 0 && n % 3 == 0)
    {
        cout << "Number is divisible by 3 but not 2.\n";
    }
    if (n % 2 == 0 && n % 3 != 0)
    {
        cout << "Number is divisible by 2 but not 3.\n";
    }
    if (n % 2 != 0 && n % 3 != 0)
    {
        cout << "Number is not divivsible by both 2 and 3.\n";
    }

    return 0;
}