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

    cout << "\nLinked List: " << endl;
    temp = head;

    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;

    return 0;
}
