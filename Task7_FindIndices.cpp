#include <iostream>
using namespace std;

// Function to find all indices of a given element in an array
int findAllIndices(int arr[], int n, int key, int indices[]) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            indices[count++] = i; // store index
        }
    }
    return count; // how many times found
}

int main() {
    int n, key;
    cout << "Enter size of array: ";
    cin >> n;

    if (n <= 0) {
        cout << "Array is empty!" << endl;
        return 0;
    }

    int arr[100]; // maximum allowed size
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter key to search: ";
    cin >> key;

    int indices[100];
    int count = findAllIndices(arr, n, key, indices);

    if (count == 0) {
        cout << "Key not found!" << endl;
    } else {
        cout << "Key found at indices: ";
        for (int i = 0; i < count; i++) {
            cout << indices[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
