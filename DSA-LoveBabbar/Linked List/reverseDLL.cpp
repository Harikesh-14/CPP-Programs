#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int data){
        this->data = data;
        this->next = nullptr;
        this->prev = nullptr;
    }

    ~Node(){
        delete next;
        delete prev;
    }
};

Node* insertAtHead(Node* &head, int data){
    Node* newNode = new Node(data);
    if(head == nullptr){
        return newNode;
    }

    newNode->next = head;
    head->prev = newNode;
    head = newNode;
    return head;
}

Node* reverseLinkedList(Node* head){
    if(head == nullptr || head->next == nullptr){
        return head;
    }

    Node* previous = nullptr;
    Node* forward = nullptr;
    Node* current = head;

    while(current != nullptr){
        forward = current->next;
        current->next = previous;
        current->prev = forward;
        previous = current;
        current = forward;
    }
    return previous;
}

void printLinkedList(Node* &head){
    Node* temp = head;
    while(temp != nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main(){
    Node* head = new Node(1);
    insertAtHead(head, 2);
    insertAtHead(head, 3);
    insertAtHead(head, 4);
    insertAtHead(head, 5);
    printLinkedList(head);

    cout<<"\nLinked List in the reversed order: ";
    head = reverseLinkedList(head);
    printLinkedList(head);

    delete head;

    return 0;
}