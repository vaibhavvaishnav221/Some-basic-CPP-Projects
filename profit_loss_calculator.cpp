#include <iostream>
using namespace std;

int main()
{
    int sp;
    cout << "Enter Selling Price: ";
    cin >> sp;

    int cp;
    cout << "Enter Cost Price";
    cin >> cp;

    if (cp > sp)
    {
        cout << "Loss: " << cp - sp << endl;
    }
    else if (cp == sp)
    {
        cout << "No Profit/Loss" << endl;
    }
    else
    {
        cout << "Profit: " << sp - cp << endl;
    }
}
