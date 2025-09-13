#include <iostream>
using namespace std;

// Bring in the function to test
int naivePatternMatch(const char text[], const char pattern[]);

int main() {
    cout << "Test 1 (hello, pattern=he): ";
    cout << (naivePatternMatch("hello", "he") == 0 ? "PASS" : "FAIL") << endl;

    cout << "Test 2 (hello, pattern=lo): ";
    cout << (naivePatternMatch("hello", "lo") == 3 ? "PASS" : "FAIL") << endl;

    cout << "Test 3 (hello, pattern=abc): ";
    cout << (naivePatternMatch("hello", "abc") == -1 ? "PASS" : "FAIL") << endl;

    cout << "Test 4 (empty pattern): ";
    cout << (naivePatternMatch("hello", "") == -1 ? "PASS" : "FAIL") << endl;

    return 0;
}
