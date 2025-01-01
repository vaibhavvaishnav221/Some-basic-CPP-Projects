#include <iostream>
using namespace std;

int main()
{
   int x;
   cout << "Enter a number: ";
   cin >> x;

   cout << "The character associated to this ASCII value is: " << char(x) << "." << '\n';
}