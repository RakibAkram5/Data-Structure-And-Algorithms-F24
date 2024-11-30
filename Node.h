template <class T>
struct Node {
	T data;
	Node<T>* next;
};
template <class T>
class LinkedList {
protected:
	Node<T>* head;
	Node<T>* tail;
public:
	LinkedList();
	virtual void insertAtHead(T) = 0;
	virtual T deleteFromTail() = 0;
	virtual T deleteFromHead() = 0;
	virtual void sortedValue(T) = 0;
	virtual bool searchValue(T) = 0;
	virtual void insertAtTail(T) = 0;

};
template<class T>
LinkedList<T>::LinkedList() {
	head = nullptr;
	tail = nullptr;
}