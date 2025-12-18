#include <iostream>
#include <vector>

int main() {
    int a;
    std::cout << "Enter a number: ";
    std::cin >> a;

    // Determine the count of numbers to generate
    int n;
    if (a % 2 == 0) {
        n = a - 1;
    } else {
        n = a;
    }

    // Loop to generate and print the odd numbers
    for (int i = 0; i < n; i++) {
        // Formula for the i-th odd number: 2*i + 1
        std::cout << (2 * i + 1);

        // Print comma and space if it's not the last element
        if (i < n - 1) {
            std::cout << ", ";
        }
    }

    std::cout << std::endl;
    return 0;
}