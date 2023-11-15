#include <iostream>
#include <cctype> // For isalpha function

std::string checkCharacterType(char c) {
    if (std::isalpha(c)) {
        if (std::tolower(c) == 'a' || std::tolower(c) == 'e' || std::tolower(c) == 'i' || std::tolower(c) == 'o' || std::tolower(c) == 'u') {
            return "vowel";
        } else {
            return "consonant";
        }
    } else {
        return "invalid input";
    }
}

int main() {
    char user_input;
    std::cout << "Enter a character: ";
    std::cin >> user_input;

    if (std::isalpha(user_input)) {
        std::string result = checkCharacterType(user_input);
        std::cout << "Input is " << result << "." << std::endl;
    } else {
        std::cout << "Please enter a valid alphabetic character." << std::endl;
    }

    return 0;
}