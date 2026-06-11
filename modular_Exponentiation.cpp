
#include <iostream>

using namespace std;

// Function to calculate (base^exponent) % modulus using modular exponentiation
long long powerMod(long long base, long long exponent, long long modulus) {
    // Initialize result
    long long result = 1;

    // Update base if it is more than or equal to modulus
    base = base % modulus;

    while (exponent > 0) {
        // If exponent is odd, multiply base with result
        if (exponent % 2 == 1)
            result = (result * base) % modulus;

        // Exponent must be even now, divide it by 2
        exponent = exponent >> 1; // Equivalent to exponent /= 2
        base = (base * base) % modulus;
    }

    return result;
}

int main() {
    long long base = 3;
    long long exponent = 10;
    long long modulus = 7;

    // Calculate (base^exponent) % modulus
    long long result = powerMod(base, exponent, modulus);

    cout << "Result: " << result << endl; // Output: 4

    return 0;
}
