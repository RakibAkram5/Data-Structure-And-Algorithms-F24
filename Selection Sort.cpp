#include <iostream>
using namespace std;
void selectionSort(int arr[],int size);
void selectionSort(int arr[],int size){
	for(int i=0;i<size-1;i++){
		int minindex=i;
		for(int j=i+1;j<size;j++){
			if(arr[j]<arr[minindex]){
				minindex=j;
			}
		}
		int temp=arr[i];
		arr[i]=arr[minindex];
		arr[minindex]=temp;
	}
}
int main() {
    int size;
    cout << "Enter the Size of the Array: ";
    cin >> size;
    
    // Dynamically allocate an array of the given size.
    int* arr = new int[size];
    
    cout << "Enter the Elements in the Array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    
    // Sort the array using selection sort.
    selectionSort(arr, size);
    
    cout << "Sorted Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    // Free the allocated memory.
    delete[] arr;
    
    return 0;
}
