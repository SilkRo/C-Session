// Logical Operators in C++:
// && (Logical AND)
// || (Logical OR)
// ! (Logical NOT)

#include <iostream>
using namespace std;

int main() {
    // Variables for demonstration
    bool A = true;
    bool B = false;

    // Logical AND (&&)
    cout << "Logical AND (A && B): " << (A && B) << endl;

    // Logical OR (||)
    cout << "Logical OR (A || B): " << (A || B) << endl;

    // Logical NOT (!)
    cout << "Logical NOT (!A): " << (!A) << endl;
    cout << "Logical NOT (!B): " << (!B) << endl;

    // Demonstrating complex expression
    bool C = (A && !B) || (A || B);
    cout << "Complex Expression ((A && !B) || (A || B)): " << C << endl;

    return 0;
}

// Logical AND (&&): Returns true if both operands are true.
// Logical OR (||): Returns true if at least one of the operands is true.
// Logical NOT (!): Negates the boolean value (true becomes false and vice versa).
