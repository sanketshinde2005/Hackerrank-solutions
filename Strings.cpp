#include <iostream>
#include <string>

int main() {
    // Declare variables to store input strings
    std::string string1, string2;

    // Read input strings
    std::cin >> string1 >> string2;

    // Calculate and print lengths of the strings
    std::cout << string1.length() << " " << string2.length() << std::endl;

    // Concatenate the strings and print the result
    std::cout << string1 + string2 << std::endl;

    // Swap the first characters and print the modified strings
    std::swap(string1[0], string2[0]);
    std::cout << string1 << " " << string2 << std::endl;

    return 0;
}