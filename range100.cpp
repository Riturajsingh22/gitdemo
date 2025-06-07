#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    // Check if the number is within the range 100 to 999
    if (num >= 100 && num <= 999) {
        cout << "The number is within the range 100 to 999." << endl;
    } else {
        cout << "The number is NOT within the range 100 to 999." << endl;
    }

    return 0;
}
