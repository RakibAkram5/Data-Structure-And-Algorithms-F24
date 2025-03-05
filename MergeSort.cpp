#include <iostream>
using namespace std;

void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int* l = new int[n1];
    int* r = new int[n2];

    // Copy elements into left temporary array
    for (int i = 0; i < n1; i++) {
        l[i] = arr[left + i];
    }
    // Copy elements into right temporary array
    for (int j = 0; j < n2; j++) {
        r[j] = arr[mid + 1 + j];
    }
    
    int i = 0, j = 0, k = left;
    // Merge the temporary arrays back into arr[left..right]
    while (i < n1 && j < n2) {
        if (l[i] <= r[j]) {
            arr[k++] = l[i++];
        } else {
            arr[k++] = r[j++];
        }
    }
    // Copy any remaining elements of l[]
    while (i < n1) {
        arr[k++] = l[i++];
    }
    // Copy any remaining elements of r[]
    while (j < n2) {
        arr[k++] = r[j++];
    }
    
    // Free the temporary arrays
    delete[] l;
    delete[] r;
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

int main() {
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;
    
    int* arr = new int[size];
    cout << "Enter the elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    
    mergeSort(arr, 0, size - 1);
    
    cout << "Sorted array (Merge Sort): ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    delete[] arr;
    return 0;
}

