#include <iostream>
using namespace std;

int main() {
    int a, b;

   
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    // Greater than
    if (a > b) {
        cout << a << " is greater than " << b << endl;
    } else {
        cout << a << " is not greater than " << b << endl;
    }

    // Less than
    if (a < b) {
        cout << a << " is less than " << b << endl;
    } else {
        cout << a << " is not less than " << b << endl;
    }

    // Greater than or equal to
    if (a >= b) {
        cout << a << " is greater than or equal to " << b << endl;
    } else {
        cout << a << " is not greater than or equal to " << b << endl;
    }

    // Less than or equal to
    if (a <= b) {
        cout << a << " is less than or equal to " << b << endl;
    } else {
        cout << a << " is not less than or equal to " << b << endl;
    }

    // Equal to
    if (a == b) {
        cout << a << " is equal to " << b << endl;
    } else {
        cout << a << " is not equal to " << b << endl;
    }

    // Not equal to
    if (a != b) {
        cout << a << " is not equal to " << b << endl;
    } else {
        cout << a << " is equal to " << b << endl;
    }

    return 0;
}
