#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }

    ~Node() {
        delete next;
    }
};

Node* insertNode(Node*& head, int element, int data) {
    if (head == nullptr) {
        head = new Node(data);
    } else {
        Node* temp = head;
        while (temp->next != nullptr && temp->data != element) {
            temp = temp->next;
        }
        if (temp->data == element) {
            Node* newNode = new Node(data);
            newNode->next = temp->next;
            temp->next = newNode;
        }
    }

    return head;
}

void deleteNode(Node*& head, int element) {
    if (head == nullptr) {
        cout << "The linked list is empty" << endl;
        return;
    }

    if (head->data == element) {
        Node* temp = head;
        head = head->next;
        temp->next = nullptr;
        delete temp;
        return;
    }

    Node* prev = head;
    Node* curr = prev->next;

    while (curr != nullptr && curr->data != element) {
        prev = curr;
        curr = curr->next;
    }

    if (curr != nullptr) {
        prev->next = curr->next;
        curr->next = nullptr;
        delete curr;
    }
}

void printLinkedList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;
    insertNode(head, 1, 2);
    insertNode(head, 2, 3);
    insertNode(head, 3, 4);
    insertNode(head, 4, 5);
    printLinkedList(head);

    // deleteNode(head, 3);
    // printLinkedList(head);

    // deleteNode(head, 2);
    // printLinkedList(head);

    // deleteNode(head, 5);
    // printLinkedList(head);

    delete head;
    return 0;
}
