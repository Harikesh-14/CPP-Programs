#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = nullptr;
    }

    ~Node(){
        delete next;
    }
};

Node* insertAtHead(Node* &head, int data){
    Node* newNode = new Node(data);
    if(head == nullptr){
        return newNode;
    }
    newNode->next = head;
    head = newNode; 
    return head;   
}

Node* reverseLinkedList(Node* &head){
    if(head == nullptr || head->next == nullptr){
        return head;
    }

    Node* prev = nullptr;
    Node* forward = nullptr;
    Node* curr = head;

    while(curr != nullptr){
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
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
    printLinkedList(head);

    cout<<"\nLinked List in the reversed order: ";
    head = reverseLinkedList(head);
    printLinkedList(head);    

    delete head;

    return 0;
}