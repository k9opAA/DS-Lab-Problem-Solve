#include <iostream>
using namespace std;

// Function to sort an array manually using Bubble Sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements if they are in the wrong order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to perform Binary Search
int binarySearch(int arr[], int n, int target) {
    int left = 0, right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Check if the target is at the middle
        if (arr[mid] == target) {
            return mid; // Return the index of the target
        }
        // If the target is smaller, search the left half
        else if (arr[mid] > target) {
            right = mid - 1;
        }
        // If the target is larger, search the right half
        else {
            left = mid + 1;
        }
    }

    return -1; // Return -1 if the target is not found
}

int main() {
    int n, target;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Step 1: Sort the array manually
    bubbleSort(arr, n);

    // Display the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Step 2: Prompt user for the target value
    cout << "Enter the element to search: ";
    cin >> target;

    // Step 3: Perform Binary Search
    int result = binarySearch(arr, n, target);

    // Step 4: Display the result
    if (result != -1) {
        cout << "Element " << target << " found at index " << result << " (0-based index)." << endl;
    } else {
        cout << "Element " << target << " not found in the array." << endl;
    }

    return 0;
}
