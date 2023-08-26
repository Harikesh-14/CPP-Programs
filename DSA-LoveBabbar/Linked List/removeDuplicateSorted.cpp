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

void printLinkedList(Node* &head){
    Node* temp = head;
    while(temp != nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }cout<<endl;
}

Node* removeDuplicates(Node* &head){
    if(head == nullptr){
        return nullptr;
    }

    Node* curr = head;
    Node* temp = curr->next;

    while(curr != nullptr){
        if(curr->data == temp->data){
            curr->next = temp->next;
            temp->next = nullptr;
            if(temp->next == nullptr){
                temp = curr;
                curr = curr->next;
            } else{
                temp = temp->next;
            }
        }else{
            if(temp->next == nullptr){
                temp = curr;
                curr = curr->next;
            } else{
                temp = temp->next;
            }
        }
    }
    return head;
}

int main(){
    Node* head = new Node(1);
    insertAtHead(head, 5);
    insertAtHead(head, 2);
    insertAtHead(head, 5);
    insertAtHead(head, 1);
    insertAtHead(head, 1);
    cout<<"Original Linked List: ";
    printLinkedList(head);

    cout<<"Linked List after deletion of duplicate node: ";
    head = removeDuplicates(head);
    printLinkedList(head);

    return 0;
}