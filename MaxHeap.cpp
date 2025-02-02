#include <iostream>
using namespace std;

class MaxHeap {
private:
    int* heap;
    int capacity;
    int size;

    void heapifyDown(int);
    void heapifyUp(int);
    void swap(int&, int&); // Custom swap function

public:
    MaxHeap(int);
    ~MaxHeap();
    void insert(int);
    void deleteMax();
    bool search(int);
    void display();
};

// Custom swap function
void MaxHeap::swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void MaxHeap::heapifyDown(int index) {
    int largest = index; // Assume the current node is the largest
    int leftChild = 2 * index + 1;
    int rightChild = 2 * index + 2;

    // Check if the left child is larger than the current node
    if (leftChild < size && heap[leftChild] > heap[largest]) {
        largest = leftChild;
    }

    // Check if the right child is larger than the current largest node
    if (rightChild < size && heap[rightChild] > heap[largest]) {
        largest = rightChild;
    }

    // If the largest node is not the current node, swap and continue heapifying down
    if (largest != index) {
        swap(heap[index], heap[largest]); // Use custom swap
        heapifyDown(largest);
    }
}

void MaxHeap::heapifyUp(int index) {
    int parent = (index - 1) / 2;

    // If the current node is greater than its parent, swap and continue heapifying up
    if (index > 0 && heap[index] > heap[parent]) {
        swap(heap[index], heap[parent]); // Use custom swap
        heapifyUp(parent);
    }
}

MaxHeap::MaxHeap(int cap) {
    capacity = cap;
    size = 0;
    heap = new int[capacity];
}

MaxHeap::~MaxHeap() {
    delete[] heap;
}

void MaxHeap::insert(int value) {
    if (size == capacity) {
        cout << "Heap is full....!!!!" << endl;
        return;
    }

    // Insert the new value at the end of the heap
    heap[size] = value;
    size++;

    // Restore the max-heap property by heapifying up
    heapifyUp(size - 1);
}

void MaxHeap::deleteMax() {
    if (size == 0) {
        cout << "Heap is Empty....." << endl;
        return;
    }

    // Replace the root with the last element in the heap
    heap[0] = heap[size - 1];
    size--;

    // Restore the max-heap property by heapifying down
    if (size > 0) {
        heapifyDown(0);
    }
}

bool MaxHeap::search(int value) {
    for (int i = 0; i < size; i++) {
        if (heap[i] == value) {
            return true;
        }
    }
    return false;
}

void MaxHeap::display() {
    if (size == 0) {
        cout << "Heap is Empty....." << endl;
        return;
    }

    cout << "MaxHeap: ";
    for (int i = 0; i < size; i++) {
        cout << heap[i] << " ";
    }
    cout << endl;
}

int main() {
    MaxHeap heap(10);

    heap.insert(5);
    heap.insert(3);
    heap.insert(8);
    heap.insert(1);
    heap.insert(10);

    heap.display(); // MaxHeap: 10 5 8 1 3

    heap.deleteMax();
    heap.display(); // MaxHeap: 8 5 3 1

    cout << "Search for 5: " << (heap.search(5) ? "Found" : "Not Found") << endl; // Found
    cout << "Search for 10: " << (heap.search(10) ? "Found" : "Not Found") << endl; // Not Found

    return 0;
}