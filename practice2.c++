#include <iostream>

void reverseNumber(int num) {
    bool isNegative = false;
    if (num < 0) {
        isNegative = true;
        num = -num; // Make num positive for easier reversal
    }

    int ans = 0;
    while (num > 0) {
        int lastDigit = num % 10;
        ans = (ans * 10) + lastDigit;
        num /= 10;
    }

    if (isNegative) {
        std::cout << -ans << std::endl; // Add the negative sign back
    } else {
        std::cout << ans << std::endl;
    }
}

int main() {
    reverseNumber(123);      // Output: 321
    reverseNumber(-123);     // Output: -321
    reverseNumber(0);       // Output: 0
    reverseNumber(-12);      // Output: -21
    reverseNumber(1000000); // Output: 1
    return 0;
}
