#include <iostream>
#include <cstring>
using namespace std;

// Naive pattern matching function
int naivePatternMatch(const char text[], const char pattern[]) {
    int n = strlen(text);
    int m = strlen(pattern);

    if (m == 0) return -1; // empty pattern

    for (int i = 0; i <= n - m; i++) {
        int j = 0;
        while (j < m && text[i + j] == pattern[j]) {
            j++;
        }
        if (j == m) return i; // found
    }
    return -1; // not found
}

int main() {
    char text[100], pattern[100];

    cout << "Enter text (no spaces): ";
    cin >> text;

    cout << "Enter pattern (no spaces): ";
    cin >> pattern;

    int pos = naivePatternMatch(text, pattern);

    if (pos == -1) cout << "Pattern not found." << endl;
    else cout << "Pattern found at index " << pos << endl;

    return 0;
}
