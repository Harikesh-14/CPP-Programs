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
    while(curr != nullptr){
        if((curr->next != nullptr) && curr->data == curr->next->data){
            Node* nextToNextNode = curr->next->next;
            Node* nodeToDelete = curr->next;
            delete nodeToDelete;
            curr->next = nextToNextNode;
        }else{
            curr = curr->next;
        }
    }
    return head;
}

int main(){
    Node* head = new Node(1);
    insertAtHead(head, 2);
    insertAtHead(head, 2);
    insertAtHead(head, 3);
    insertAtHead(head, 3);
    insertAtHead(head, 3);
    insertAtHead(head, 3);
    insertAtHead(head, 3);
    insertAtHead(head, 3);
    insertAtHead(head, 4);
    insertAtHead(head, 4);
    insertAtHead(head, 4);
    insertAtHead(head, 4);
    insertAtHead(head, 4);
    cout<<"Original Linked List: ";
    printLinkedList(head);

    cout<<"Linked List after deletion of duplicate node: ";
    head = removeDuplicates(head);
    printLinkedList(head);

    return 0;
}