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

void insertAtHead(Node* &head, int data) {
    Node* newNode = new Node(data);
    if (head == nullptr) {
        head = newNode;
    }
    else {
        newNode->next = head;
        head = newNode;
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

Node* sum(Node* head1, Node* head2) {
    Node* result = nullptr;
    Node* temp = nullptr;
    Node* prev = nullptr;
    int carry = 0;

    while (head1 != nullptr || head2 != nullptr || carry) {
        int sum = carry;

        if (head1 != nullptr) {
            sum += head1->data;
            head1 = head1->next;
        }
        if (head2 != nullptr) {
            sum += head2->data;
            head2 = head2->next;
        }

        carry = sum / 10;
        sum %= 10;
        temp = new Node(sum);

        if (result == nullptr) {
            result = temp;
        }
        else {
            prev->next = temp;
        }

        prev = temp;
    }

    return result;
}

int main() {
    Node* head1 = nullptr;
    insertAtHead(head1, 1);
    insertAtHead(head1, 1);
    insertAtHead(head1, 1);

    Node* head2 = nullptr;
    insertAtHead(head2, 2);
    insertAtHead(head2, 2);
    insertAtHead(head2, 2);

    Node* res = sum(head1, head2);
    printLinkedList(res);

    delete res;

    return 0;
}