#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num % 3 == 0 && num % 7 == 0) {
        cout << num << " is divisible by both 3 and 7." << endl;
    } else {
        cout << num << " is not divisible by both 3 and 7." << endl;
    }

    return 0;
}
