#include <iostream>
using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    char acronym[100];  // Assuming a maximum length for the acronym
    int acronymIndex = 0;
    bool newWord = true;

    for (int i = 0; i < input.length(); i++) {
        if (isalpha(input[i])) {  // Check if the character is an alphabet letter
            if (newWord) {
                acronym[acronymIndex++] = toupper(input[i]);
                newWord = false;
            }
        } else {
            newWord = true;
        }
    }

    acronym[acronymIndex] = '\0';  // Null-terminate the acronym string

    cout << "Acronym: " << acronym << endl;

    return 0;
}
