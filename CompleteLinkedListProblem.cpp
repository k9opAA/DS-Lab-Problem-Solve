#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Function to insert a new node at the end of the linked list
Node* insertAtEnd(Node* head, int num) {
    Node* newNode = new Node();
    newNode->data = num;
    newNode->next = nullptr;

    if (head == nullptr) {
        return newNode;
    }

    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;

    return head;
}

// Function to sort the linked list using Bubble Sort
Node* sortLinkedList(Node* head) {
    if (head == nullptr || head->next == nullptr) {
        return head;
    }

    bool swapped;
    Node* ptr1;
    Node* lptr = nullptr;

    do {
        swapped = false;
        ptr1 = head;

        while (ptr1->next != lptr) {
            if (ptr1->data > ptr1->next->data) {
                swap(ptr1->data, ptr1->next->data);
                swapped = true;
            }
            ptr1 = ptr1->next;
        }
        lptr = ptr1; // Reduce the range of unsorted elements
    } while (swapped);

    return head;
}

// Function to insert an element into a sorted linked list
Node* insertSorted(Node* head, int num) {
    Node* newNode = new Node();
    newNode->data = num;
    newNode->next = nullptr;

    if (head == nullptr || head->data >= num) {
        newNode->next = head;
        head = newNode;
        return head;
    }

    Node* current = head;
    while (current->next != nullptr && current->next->data < num) {
        current = current->next;
    }

    newNode->next = current->next;
    current->next = newNode;

    return head;
}

// Function to search for an element in the linked list
int searchInList(Node* head, int target) {
    int position = 1; // Position starts at 1
    while (head != nullptr) {
        if (head->data == target) {
            return position; // Return the position if found
        }
        head = head->next;
        position++;
    }
    return -1; // Return -1 if the element is not found
}

// Function to delete an element from the linked list
Node* deleteFromList(Node* head, int target) {
    if (head == nullptr) {
        cout << "List is empty. Cannot delete." << endl;
        return head;
    }

    // If the head node is the target
    if (head->data == target) {
        Node* temp = head;
        head = head->next;
        delete temp;
        cout << "Element " << target << " deleted successfully." << endl;
        return head;
    }

    Node* current = head;
    while (current->next != nullptr && current->next->data != target) {
        current = current->next;
    }

    if (current->next == nullptr) {
        cout << "Element " << target << " not found in the list." << endl;
    } else {
        Node* temp = current->next;
        current->next = temp->next;
        delete temp;
        cout << "Element " << target << " deleted successfully." << endl;
    }

    return head;
}

// Function to display the linked list
void printList(Node* head) {
    if (head == nullptr) {
        cout << "The list is empty." << endl;
        return;
    }
    while (head != nullptr) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = nullptr;
    int n, num, choice;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> num;
        head = insertAtEnd(head, num);
    }

    do {
        cout << "\nMenu:\n";
        cout << "1. Sort the linked list\n";
        cout << "2. Insert an element\n";
        cout << "3. Search for an element\n";
        cout << "4. Delete an element\n";
        cout << "5. Display the linked list\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            head = sortLinkedList(head);
            cout << "Linked list sorted successfully." << endl;
            break;

        case 2:
            cout << "Enter the element to insert: ";
            cin >> num;
            head = insertSorted(head, num);
            cout << "Element inserted successfully." << endl;
            break;

        case 3:
            cout << "Enter the element to search: ";
            cin >> num;
            int position;
            position = searchInList(head, num);
            if (position != -1) {
                cout << "Element " << num << " found at position " << position << "." << endl;
            } else {
                cout << "Element " << num << " not found in the list." << endl;
            }
            break;

        case 4:
            cout << "Enter the element to delete: ";
            cin >> num;
            head = deleteFromList(head, num);
            break;

        case 5:
            cout << "Linked list: ";
            printList(head);
            break;

        case 6:
            cout << "Exiting program." << endl;
            break;

        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 6);

    return 0;
}
