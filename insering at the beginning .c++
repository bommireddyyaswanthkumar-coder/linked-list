#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;


    Node(int value) {
        data = value;
        next = NULL;
    }
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = NULL;
    }

    // Insert at Beginning
    void insertAtBeginning(int value) {
        Node* newNode = new Node(value);

        newNode->next = head;  // Point new node to current head
        head = newNode;       // Make new node as head
    }

    // Display list
    void display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    LinkedList list;

    list.insertAtBeginning(30);
    list.insertAtBeginning(20);
    list.insertAtBeginning(10);

    list.display();

    return 0;
}
