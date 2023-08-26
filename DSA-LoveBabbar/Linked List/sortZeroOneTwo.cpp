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

Node* sortList(Node* &head){
    int zeroCount = 0;
    int oneCount = 0;
    int twoCount = 0;

    Node* temp = head;
    while(temp != nullptr){
        if(temp->data == 0){
            zeroCount++;
        } else if(temp->data == 1){
            oneCount++;
        } else if(temp->data == 2){
            twoCount++;
        }
        temp = temp->next;
    }

    temp = head;
    while(temp != nullptr){
        if(zeroCount != 0){
            temp->data = 0;
            zeroCount--;
        } else if(oneCount != 1){
            temp->data = 1;
            oneCount--;
        } else if(twoCount != 2){
            temp->data = 2;
            twoCount--;
        }
        temp = temp->next;
    }
    return head;
}

int main(){
    Node* head = new Node(1);
    insertAtHead(head, 0);
    insertAtHead(head, 1);
    insertAtHead(head, 1);
    insertAtHead(head, 2);
    insertAtHead(head, 1);
    insertAtHead(head, 0);
    cout<<"Original Linked List: ";
    printLinkedList(head);

    head = sortList(head);
    printLinkedList(head);

    delete head;
    return 0;
}