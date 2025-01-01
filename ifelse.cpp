#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter a character : ";
    cin >> ch;

    if ((int)ch >= 65 && (int)ch <= 90)
    {
        cout << "'" << ch << "'" << " is an upppercase Alphabet." << endl;
    }

    else
    {
        cout << "'" << ch << "'" << " is not an upppercase Alphabet." << endl;
    }
}