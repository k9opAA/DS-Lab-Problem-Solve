#include <iostream>
#include <cstring>
using namespace std;

int findFirstOccurrence(const char text[], const char pattern[]) {
    int textLength = strlen(text);
    int patternLength = strlen(pattern);

    for (int i = 0; i <= textLength - patternLength; i++) {
        int j;

        for (j = 0; j < patternLength; j++) {
            if (text[i + j] != pattern[j]) {
                break;
            }
        }

        if (j == patternLength) {
            return i;
        }
    }

    return -1;
}

int main() {
    char text[100], pattern[100];

    cout << "Enter the text: ";
    cin.getline(text, 100);

    cout << "Enter the pattern: ";
    cin.getline(pattern, 100);


    int index = findFirstOccurrence(text, pattern);

    if (index != -1) {
        cout << "Pattern found at index " << index << endl;
    } else {
        cout << "Pattern not found in the text." << endl;
    }

    return 0;
}
