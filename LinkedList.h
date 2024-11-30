#include <iostream>
#include "Node.h"
using namespace std;

template <class T>
class MyLL : public LinkedList<T> {
public:
 
    void insertAtHead(T value);
    void insertAtTail(T value);
    T deleteFromHead();
    T deleteFromTail();
    void sortedValue(T value);
    bool searchValue(T value);
    bool Isempty();
    void display();
};

template <class T>
bool MyLL<T>::Isempty() {
    return this->head == nullptr;
}

template <class T>
void MyLL<T>::insertAtHead(T value) {
    Node<T>* nn = new Node<T>;
    nn->data = value;
    nn->next = this->head;
    if (Isempty()) {
        this->tail = nn;
    }
    this->head = nn;
}

template <class T>
void MyLL<T>::insertAtTail(T value) {
    Node<T>* nn = new Node<T>;
    nn->data = value;
    nn->next = nullptr;
    if (Isempty()) {
        this->head = nn;
        this->tail = nn;
    }
    else {
        this->tail->next = nn;
        this->tail = nn;
    }
}

template <class T>
T MyLL<T>::deleteFromHead() {
    if (Isempty()) {
        cout << "Linked List Is Empty." << endl;
        return T(); 
    }
    else if (this->head == this->tail) { 
        T returningValue = this->head->data;
        delete this->head;
        this->head = nullptr;
        this->tail = nullptr;
        return returningValue;
    }
    else { 
        Node<T>* t = this->head;
        T returningValue = t->data;
        this->head = this->head->next;
        delete t;
        return returningValue;
    }
}

template <class T>
T MyLL<T>::deleteFromTail() {
    if (Isempty()) {
        cout << "Linked List Is Empty." << endl;
        return T(); 
    }
    else if (this->head == this->tail) { 
        T returningValue = this->tail->data;
        delete this->tail;
        this->head = nullptr;
        this->tail = nullptr;
        return returningValue;
    }
    else { 
        Node<T>* t = this->head;
        while (t->next != this->tail) {
            t = t->next;
        }
        T returningValue = this->tail->data;
        delete this->tail;
        this->tail = t;
        this->tail->next = nullptr;
        return returningValue;
    }
}
template<class T>
void MyLL<T>::sortedValue(T value) {
    Node<T>* Newnode = new Node<T>();
    Newnode->data = value;
    Newnode->next = nullptr;

    if (Isempty()) { 
        LinkedList<T>::head = Newnode;
        LinkedList<T>::tail = Newnode;
    }
    else if (value <= LinkedList<T>::head->data) { 
        insertAtHead(value);
    }
    else if (value >= LinkedList<T>::tail->data) { 
        insertAtTail(value);
    }
    else {
        Node<T>* current = LinkedList<T>::head;
        while (current->next != nullptr && current->next->data < value) {
            current = current->next;
        }
        Newnode->next = current->next;
        current->next = Newnode;

       
        if (Newnode->next == nullptr) {
            LinkedList<T>::tail = Newnode;
        }
    }
}

template <class T>
bool MyLL<T>::searchValue(T value) {
        Node<T>* current = this->head; 
        while (current != nullptr) {
            if (current->data == value) { 
                return true;
            }
            current = current->next; 
        }
        return false; 
    }
template <class T>
void MyLL<T>::display() {
    if (Isempty()) {
        cout << "Linked List is empty." << endl;
        return;
    }
    Node<T>* current = this->head;
    cout << "Linked List: ";
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}