#include <iostream>
using namespace std;

int main() {
    float angle1, angle2, angle3;

    // Input angles
    cout << "Enter first angle: ";
    cin >> angle1;
    cout << "Enter second angle: ";
    cin >> angle2;
    cout << "Enter third angle: ";
    cin >> angle3;

    // Check if the triangle is valid
    if (angle1 > 0 && angle2 > 0 && angle3 > 0 && (angle1 + angle2 + angle3 == 180)) {
        cout << "Valid Triangle" << endl;
    } else {
        cout << "Invalid Triangle" << endl;
    }

    return 0;
}
