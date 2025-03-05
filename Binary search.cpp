#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
    int size;
    cout << "Enter the Size of the Array: ";
    cin >> size;
    
    // Dynamically allocate array
    int* arr = new int[size];
    
    cout << "Enter the Elements in the Array (in sorted order): ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    
    int key;
    cout << "Enter the Target Key to Search: ";
    cin >> key;
    
    int result = binarySearch(arr, size, key);
    
    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found" << endl;
    
    // Free allocated memory
    delete[] arr;
    
    return 0;
}

