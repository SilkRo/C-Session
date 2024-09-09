// Bitwise Operators in C++:
// & (AND)
// | (OR)
// ^ (XOR)
// ~ (NOT)
// << (Left Shift)
// >> (Right Shift)

#include <iostream>
using namespace std;

int main() {
    // Variables for demonstration
    int a = 5;  // Binary: 0101
    int b = 9;  // Binary: 1001

    // Bitwise AND (&)
    cout << "Bitwise AND (a & b): " << (a & b) << endl;  // Binary: 0001 -> Decimal: 1

    // Bitwise OR (|)
    cout << "Bitwise OR (a | b): " << (a | b) << endl;   // Binary: 1101 -> Decimal: 13

    // Bitwise XOR (^)
    cout << "Bitwise XOR (a ^ b): " << (a ^ b) << endl;  // Binary: 1100 -> Decimal: 12

    // Bitwise NOT (~)
    cout << "Bitwise NOT (~a): " << (~a) << endl;        // Binary: 1010 -> Decimal: -6 (2's complement representation)

    // Left Shift (<<)
    cout << "Left Shift (a << 1): " << (a << 1) << endl; // Binary: 1010 -> Decimal: 10 (Shift left by 1 bit)

    // Right Shift (>>)
    cout << "Right Shift (b >> 1): " << (b >> 1) << endl;// Binary: 0100 -> Decimal: 4 (Shift right by 1 bit)

    return 0;
}




// Bitwise AND (&): Performs an AND operation on each corresponding bit of two numbers. Only 1 & 1 results in 1, otherwise 0.
// Bitwise OR (|): Performs an OR operation on each corresponding bit. Only 0 | 0 results in 0, otherwise 1.
// Bitwise XOR (^): Performs an exclusive OR on each corresponding bit. Results in 1 if the bits are different, 0 if the same.
// Bitwise NOT (~): Inverts each bit of the number (flips 0 to 1 and vice versa).
// Left Shift (<<): Shifts the bits of a number to the left by a specified number of positions, filling with 0 bits on the right.
// Right Shift (>>): Shifts the bits of a number to the right by a specified number of positions, filling with 0 bits on the left for unsigned numbers.

// & Operator :
//   0000 1111  (15)
// & 0001 1110  (30)
// ------------
//   0000 1110  (14)

// | Operator : 
//   0000 1111  (15)
// | 0001 1110  (30)
// ------------
//   0001 1111  (31)


// XOR Operator:
//   0000 1111  (15)
// ^ 0001 1110  (30)
// ------------
//   0001 0001  (17)


//   ~0001 1110  (30)
//   ------------
//    1110 0001  (in 8-bit representation, this is -31 in decimal)


//   ~0000 1111  (15)
//   ------------
//    1111 0000  (in 8-bit representation, this is -16 in decimal)

// 15 : 0000 1111
// 30 : 0001 1110

// << =  0000 1111 result : 0001 1110
// >> = 0001 1110 result : 0000 1111