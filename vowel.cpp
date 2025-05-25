#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    // Check if input is an alphabet
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        // Convert to lowercase for simplicity
        char lowerCh = tolower(ch);

        // Check for vowel
        if (lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || lowerCh == 'o' || lowerCh == 'u') {
            cout << ch << " is a Vowel." << endl;
        } else {
            cout << ch << " is a Consonant." << endl;
        }
    } else {
        cout << "Invalid input. Please enter an alphabet character." << endl;
    }

    return 0;
}
