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

// int counter(Node* &head){
//     int count = 0;
//     Node* temp = head;
//     while(temp != nullptr){
//         temp = temp->next;
//         count++;
//     }
//     return count;
// }

// Node* middleElement(Node* &head){
//     int len = counter(head);
//     int ans = len/2;
//     int count = 0;

//     Node* temp = head;
//     while(count != ans){
//         temp = temp->next;
//         count++;
//     }
//     return temp;
// }

// Optimized version
Node* middleElement(Node* &head){
    if(head == nullptr || head->next == nullptr){
        return head;
    }

    Node *slow = head;
    Node *fast = head;
    while(fast != nullptr && fast->next != nullptr){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
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
    insertAtHead(head, 5);

    cout<<"Your Original Linked List: ";
    printLinkedList(head);

    cout<<"The middle element is: "<<middleElement(head)->data<<endl;

    delete head;

    return 0;
}