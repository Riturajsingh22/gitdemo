#include <iostream>
using namespace std;

int main() {
    float a, b, c;
    cout << "Enter three sides of a triangle: ";
    cin >> a >> b >> c;

    // Check for triangle validity
    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            cout << "The triangle is Equilateral." << endl;
        }
        else if (a == b || b == c || a == c) {
            cout << "The triangle is Isosceles." << endl;
        }
        else {
            cout << "The triangle is Scalene." << endl;
        }
    } else {
        cout << "The given sides do not form a triangle." << endl;
    }

    return 0;
}
