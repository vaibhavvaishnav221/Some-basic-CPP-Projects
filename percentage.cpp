#include <iostream>
using namespace std;

int main()
{
    // marks out of 100
    int physics;
    cout << "Enter your marks in Physics :-" << endl;
    cin >> physics;

    int chemistry;
    cout << "Enter your marks in Chemistry :-" << endl;
    cin >> chemistry;

    int mathematics;
    cout << "Enter your marks in Mathematics :-" << endl;
    cin >> mathematics;

    int english;
    cout << "Enter your marks in English :-" << endl;
    cin >> english;

    int economics;
    cout << "Enter your marks in Economics :-" << endl;
    cin >> economics;

    float percentage = (physics + chemistry + mathematics + english + economics) / 5.0;

    cout << "Your percentage in 12th class is " << percentage << "%." << endl;
}