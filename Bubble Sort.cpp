#include <iostream>
using namespace std;

void bubblesort(int arr[], int size) {
    bool swapped;
    do {
        swapped = false; // Reset swapped for each pass
        for (int i = 1; i < size; i++) {
            if (arr[i - 1] > arr[i]) {
                int temp = arr[i - 1];
                arr[i - 1] = arr[i];
                arr[i] = temp;
                swapped = true;
            }
        }
        size--;  // Reduce the range since the largest element is at the end
    } while (swapped);
}

int main() {
    int size;
    cout << "Enter the Size of the Array: ";
    cin >> size;
    
    // Dynamically allocate array
    int* arr = new int[size];
    
    cout << "Enter the Elements in the Array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    
    bubblesort(arr, size);
    
    cout << "Sorted Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    // Free allocated memory
    delete[] arr;
    
    return 0;
}

