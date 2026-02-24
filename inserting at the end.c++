#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};
void insertAtEnd(Node* &head, int value) {
    // Create new node
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;

    // If list is empty
    if (head == NULL) {
        head = newNode;
        return;
    }

    // Traverse to last node
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    // Attach new node at last
    temp->next = newNode;
}
void display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL";
}
int main() {
    Node* head = NULL;

    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);

    display(head);

    return 0;
}
