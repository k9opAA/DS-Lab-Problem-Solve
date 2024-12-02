#include <iostream>
#include <cstring>
using namespace std;


int findFirstOccurrence(const char text[], const char pattern[]) {
    int textLength = strlen(text);
    int patternLength = strlen(pattern);

    for (int i = 0; i <= textLength - patternLength; i++) {
        int j;

        // Check each character of the pattern
        for (j = 0; j < patternLength; j++) {
            if (text[i + j] != pattern[j]) {
                break;
            }
        }

        // If pattern matches completely
        if (j == patternLength) {
            return i; // Return the index of the first occurrence
        }
    }

    return -1; // Pattern not found
}

// Function to replace the first occurrence of P in T with Q
void replaceFirstOccurrence(char text[], const char pattern[], const char replacement[]) {
    int index = findFirstOccurrence(text, pattern);

    if (index == -1) {
        cout << "Pattern not found in the text." << endl;
        return;
    }

    int textLength = strlen(text);
    int patternLength = strlen(pattern);
    int replacementLength = strlen(replacement);

    // Create a new array to store the modified text
    char result[200]; // Assuming sufficient size
    int k = 0;

    // Copy text up to the start of the pattern
    for (int i = 0; i < index; i++) {
        result[k++] = text[i];
    }

    // Copy the replacement string
    for (int i = 0; i < replacementLength; i++) {
        result[k++] = replacement[i];
    }

    // Copy the rest of the text after the pattern
    for (int i = index + patternLength; i < textLength; i++) {
        result[k++] = text[i];
    }

    // Null-terminate the result string
    result[k] = '\0';

    // Output the modified text
    cout << "Modified text: " << result << endl;
}

int main() {
    char text[100], pattern[50], replacement[50];

    cout << "Enter the text: ";
    cin.getline(text, 100);

    cout << "Enter the pattern to replace: ";
    cin.getline(pattern, 50);

    cout << "Enter the replacement pattern: ";
    cin.getline(replacement, 50);

    replaceFirstOccurrence(text, pattern, replacement);

    return 0;
}
