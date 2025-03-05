#include <iostream>
using namespace std;

void quickSort(int arr[], int left, int right) {
    if (left < right) {
        int pivot = arr[right];
        int i = left - 1;
        for (int j = left; j < right; j++) {
            if (arr[j] <= pivot) {
                i++;
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        int pivotIndex = i + 1;
        int temp = arr[pivotIndex];
        arr[pivotIndex] = arr[right];
        arr[right] = temp;
        
        quickSort(arr, left, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, right);
    }
}

int main() {
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;
    
    // Dynamically allocate array
    int* arr = new int[size];
    cout << "Enter the elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    
    quickSort(arr, 0, size - 1);
    
    cout << "Sorted array (Quick Sort): ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    delete[] arr;
    return 0;
}

