#include <iostream>
#include <string>

// Function to reverse a given string
std::string reverseString(const std::string& str) {
    std::string reversedStr;
    for (int i = str.length() - 1; i >= 0; i--) {
        reversedStr.push_back(str[i]);
    }
    return reversedStr;
}

int main() {
    std::string inputString;

    // Input from the user
    std::cout << "Enter a string: ";
    std::getline(std::cin, inputString);

    // Call the reverseString function
    std::string reversedString = reverseString(inputString);

    // Display the reversed string
    std::cout << "Reversed String: " << reversedString << std::endl;

    return 0;
}
