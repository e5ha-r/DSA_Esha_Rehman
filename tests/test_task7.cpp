#include <iostream>
using namespace std;

// Bring in the function to test
int findAllIndices(int arr[], int n, int key, int indices[]);

int main() {
    int arr[6] = {3, 5, 3, 7, 3, 9};
    int indices[10];

    int count = findAllIndices(arr, 6, 3, indices);
    cout << "Test 1 (expect 0 2 4): ";
    for (int i = 0; i < count; i++) cout << indices[i] << " ";
    cout << endl;

    count = findAllIndices(arr, 6, 8, indices);
    cout << "Test 2 (expect not found): " << (count == 0 ? "PASS" : "FAIL") << endl;

    return 0;
}
// Note: This is a simple test file. 