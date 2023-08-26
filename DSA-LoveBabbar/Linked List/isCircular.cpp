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

bool isCircularLinkedList(Node* &head){
    if(head == nullptr){
        return false;
    }

    Node* temp = head;
    while(temp->next != nullptr && temp->next != head){
        temp = temp->next;
    }

    if(temp->next == head){
        return true;
    } else{
        return false;
    }
}

void printLinkedList(Node* &head){
    Node* temp = head;
    while(temp != nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }cout<<endl;
}

int main(){
    Node* head = new Node(1);
    insertAtHead(head, 2);
    insertAtHead(head, 3);
    insertAtHead(head, 4);
    cout<<"Original Linked List: ";
    printLinkedList(head);

    if(isCircularLinkedList(head)){
        cout<<"Linked List is circular in nature"<<endl;;
    } else{
        cout<<"The linked list is not circular in nature"<<endl;
    }

    delete head;

    return 0;
}