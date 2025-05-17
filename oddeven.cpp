#include<iostream>
using namespace std;
int main(){
    int number;
    cout << "Enter an integer: ";
    cin >> number;
    string arr[] = {"Even","Odd"};


    cout<< arr[number % 2]
    if (number % 2 == 0) {
        cout << number << " is even." << endl;
    } else {
        cout << number << " is odd." << endl;
    }

    return 0;
}