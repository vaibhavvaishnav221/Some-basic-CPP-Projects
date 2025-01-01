#include <iostream>
using namespace std;

int main() {
    // Calculating Simple Interest
    string user_name;
    cout << "Enter your name: ";
    getline(cin, user_name);  // Use getline to read the entire line

    float principal_amount;
    cout << "Enter your Principal Amount: ";
    cin >> principal_amount;

    float rate;
    cout << "Enter your Interest Rate: ";
    cin >> rate;

    float time;
    cout << "Enter the Time (years): ";
    cin >> time;

    float simple_interest = (principal_amount * rate * time) / 100.0;
    cout << "Hey " << user_name << ", your simple interest is " << simple_interest << "." << endl;

    return 0;
}