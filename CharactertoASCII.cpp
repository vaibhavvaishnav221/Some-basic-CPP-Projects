#include <iostream>
using namespace std;

int main()
{
   char character;
   cout << "Enter a character: ";
   cin >> character;

   cout << "The ASCII value of '" << character << "' is: " << int(character) << "." << '\n';
}