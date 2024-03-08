#include <iostream>

void update(int *a, int *b) {
    // Store the original values for updating
    int originalA = *a;
    int originalB = *b;

    // Update the values as per the requirements
    *a = originalA + originalB;
    *b = std::abs(originalA - originalB);
}

int main() {
    // Declare variables to store input values
    int a, b;

    // Read input values
    std::cin >> a >> b;

    // Call the update function
    update(&a, &b);

    // Print the updated values
    std::cout << a << std::endl;
    std::cout << b << std::endl;

    return 0;
}
