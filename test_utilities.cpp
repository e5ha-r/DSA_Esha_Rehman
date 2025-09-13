#include <iostream>
#include "utilities.h"
using namespace std;

int main() {
    // Test the add function from utilities.h
    int result = add(2, 3);
    cout << "add(2,3) == 5: " << (add(2,3) == 5 ? "PASS" : "FAIL") << endl; // Expected output: 5
    return 0;
}