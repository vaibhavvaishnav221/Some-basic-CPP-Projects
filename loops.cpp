#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Enter a number: ";
    cin >> x;

    int y;
    cout << "Enter upto what you want it's multiples: ";
    cin >> y;

    for (int i = 1; i < y + 1; i++)
    {
        cout << x * i << "\n";
    }
}