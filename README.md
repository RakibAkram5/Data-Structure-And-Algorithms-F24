# DSA F24 Labs and Project (C++)

## Table of Contents
1. [Queue](#queue)
2. [Stack](#stack)
3. [Binary Search Tree (BST)](#binary-search-tree-bst)
4. [Linked List](#linked-list)
5. [Red-Black Tree](#red-black-tree)
6. [Heap](#heap)

---

## Queue

A queue is a **linear data structure** that follows the **First In, First Out (FIFO)** principle. It is commonly used in scenarios like scheduling tasks, handling requests, and managing resources.

### Key Operations:
- **Enqueue**: Add an element to the rear of the queue.
- **Dequeue**: Remove an element from the front of the queue.
- **Front/Peek**: View the front element without removing it.
- **isEmpty**: Check if the queue is empty.

---

## Stack

A stack is a **linear data structure** that follows the **Last In, First Out (LIFO)** principle. It is used for tasks like function calls, backtracking, and undo operations.

### Key Operations:
- **Push**: Add an element to the top of the stack.
- **Pop**: Remove an element from the top of the stack.
- **Top/Peek**: View the top element without removing it.
- **isEmpty**: Check if the stack is empty.

---

## Binary Search Tree (BST)

A Binary Search Tree is a tree data structure where each node has at most two children, left and right, and the left child’s value is smaller than the parent node’s value, while the right child’s value is greater.

### Key Operations:
- **Insert**: Add a new node to the tree.
- **Search**: Find a node with a given value.
- **Delete**: Remove a node from the tree.
- **Traversal**: In-order, Pre-order, Post-order traversal.

---

## Linked List

A linked list is a **linear data structure** where elements (nodes) are stored non-contiguously, with each node pointing to the next in the sequence. It is used for dynamic memory allocation.

### Types:
- **Singly Linked List**: Each node points to the next node.
- **Doubly Linked List**: Each node points to both the next and the previous node.
- **Circular Linked List**: The last node points back to the first node.

### Key Operations:
- **Insert**: Add a node at the beginning, end, or at a specified position.
- **Delete**: Remove a node from the list.
- **Traversal**: Traverse the list to display elements.

---

## Red-Black Tree

A Red-Black Tree is a self-balancing binary search tree in which each node contains an extra bit for determining the color of the node (either red or black). It ensures the tree remains balanced during insertion and deletion operations.

### Key Properties:
- The root is always black.
- Every leaf is black.
- Red nodes cannot have red children.
- From any given node, every path from that node to its descendant leaves has the same number of black nodes.

### Key Operations:
- **Insertion**: Insert nodes while maintaining red-black properties.
- **Deletion**: Remove nodes while maintaining red-black properties.
- **Balancing**: Perform rotations to keep the tree balanced.

---

## Heap

A heap is a special tree-based data structure that satisfies the **heap property**:
- **Max Heap**: The value of each node is greater than or equal to the values of its children.
- **Min Heap**: The value of each node is less than or equal to the values of its children.

### Key Operations:
- **Insert**: Add a new element while maintaining the heap property.
- **Extract**: Remove the root element (max or min).
- **Heapify**: Rearrange the elements to maintain the heap property.
- **Peek**: View the root element without removing it.

---

## Conclusion

These are the core data structures and algorithms typically covered in DSA F24 labs and project. Understanding their principles, operations, and applications is crucial for building efficient software systems.
