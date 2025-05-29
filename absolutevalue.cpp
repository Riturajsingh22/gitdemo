// Find the absolute value of a number using conditional statements.
#include <iostream>
using namespace std;

int main() {
    int number, absoluteValue;

    cout << "Enter a number: ";
    cin >> number;

    // Using conditional statement to find absolute value
    if (number < 0) {
        absoluteValue = -number;
    } else {
        absoluteValue = number;
    }

    cout << "Absolute value: " << absoluteValue << endl;

    return 0;
}

