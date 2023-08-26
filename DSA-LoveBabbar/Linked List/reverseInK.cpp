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

Node* kReverse(Node* &head, int k){
    if(head == nullptr){
        return head;
    }

    Node* nextNode = nullptr;
    Node* currNode = head;
    Node* prevNode = nullptr;
    int count = 0;

    // 1. Reverse first k group of nodes
    while(currNode != nullptr && count < k){
        nextNode = currNode->next;
        currNode->next = prevNode;
        prevNode = currNode;
        currNode = nextNode;
        count++;
    }

    // 2. Rest recursion will handle
    if(nextNode != nullptr){
        head->next = kReverse(nextNode, k);
    }

    // 3. Return the head of the linked list
    return prevNode;

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

    int k = 2;
    cout<<"\nLinked List after K-Reverse: ";
    head = kReverse(head, k);
    printLinkedList(head);

    delete head;

    return 0;
}