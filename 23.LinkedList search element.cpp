#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* temp;
    Node* head = nullptr;
    int n, num;

    // Create the linked list
    cout << "How many nodes should be created? ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        temp = new Node();
        cout << "Enter data for node " << i << ": ";
        cin >> num;

        temp->data = num;
        temp->next = head;
        head = temp;
    }

    // Display the linked list
    cout << "\nLinked List: " << endl;
    temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;

    // Search for an element in the linked list
    int x, position = 1;
    bool found = false;
    cout << "\nEnter the element to search: ";
    cin >> x;

    temp = head;
    while (temp != nullptr) {
        if (temp->data == x) {
            cout << "Element " << x << " found at position " << position << "." << endl;
            found = true;
            break;
        }
        temp = temp->next;
        position++;
    }

    if (!found) {
        cout << "Element " << x << " not found in the linked list." << endl;
    }

    return 0;
}
