#include <bits/stdc++.h>
using namespace std;


void naivePatternMatching(const char text[], const char pattern[]) {
    int textLength = strlen(text);
    int patternLength = strlen(pattern);
    bool found = false;

    for (int i = 0; i <= textLength - patternLength; i++) {
        int j;

        for (j = 0; j < patternLength; j++) {
            if (text[i + j] != pattern[j]) {
                break;
            }
        }

        if (j == patternLength) {
            cout << "Pattern found at index " << i << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "Pattern not found in the text." << endl;
    }
}

int main() {
    char text[100], pattern[100];

    cout << "Enter the text: ";
    cin.getline(text, 100);

    cout << "Enter the pattern: ";
    cin.getline(pattern, 100);

    naivePatternMatching(text, pattern);

    return 0;
}
