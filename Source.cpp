#include "LinkedList.h"
int main() {
	MyLL<int>list;
	int value, choice;
	cout << "*************Welcome To Task 1.****************" << endl << endl;
	while(true){
		cout << "1. Add Node to the Linked List." << endl;
		cout << "2. Insert Node in Sorted Order." << endl;
		cout << "3.Delete a Node from the Linked List." << endl;
		cout << "4.Search for Node in the Liked List." << endl;
		cout << "5. Display the Linked List." << endl;
		cout << "6. Exit" << endl << endl;
		cout << "Enter The Choice: ";
		cin >> choice;
		if (choice == 1) {
			cout << "Enter the Value to Insert: ";
			cin >> value;
			list.insertAtTail(value);
		}
		else if (choice == 2) {
			cout << "Enter the Value in the Sorted Order: ";
			cin >> value;
			list.sortedValue(value);
		}
		else if (choice == 3) {
			cout << "1. Delete from head\n";
			cout << "2. Delete from tail\n";
			cout << "Enter your choice: ";
			cin >> choice;
			if (choice == 1) {
				cout << "Deleted: " << list.deleteFromHead() << endl;
			}
			else if (choice == 2) {
				cout << "Deleted: " << list.deleteFromTail() << endl;
			}
			else {
				cout << "Invalid choice!" << endl;
			}
			break;
		}
		else if (choice ==4) {
			cout << "Enter a value to search: ";
			cin >> value;
			if (list.searchValue(value)) {
				cout << "Value found in the linked list." << endl;
			}
			else {
				cout << "Value not found in the linked list." << endl;
			}
			break;

		}
		else if (choice == 5) {
			list.display();
			break;
		}
		else {
			cout << "Exiting....." << endl;
		}
	}

}