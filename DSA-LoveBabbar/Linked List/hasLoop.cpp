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

// Floyd's cycle
bool hasLoop(Node* &head){
    if(head == nullptr){
        return false;
    }

    Node* slow = head;
    Node* fast = head;
    while(fast != nullptr && fast->next != nullptr){
        slow = slow->next;
        fast = fast->next->next;
    }

    if(slow == fast){
        return true;
    } else{
        return false;
    }
}

Node* staringOfLoop(Node* &head){
    if(head == nullptr){
        return nullptr;
    }

    // Detection of loop
    Node* slow = head;
    Node* fast = head;

    while(fast != nullptr && fast->next != nullptr){
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast){
            break;
        }
    }

    if(fast == nullptr || fast->next == nullptr){
        return nullptr;
    }

    // Finding of the starting of the loop
    slow = head;
    while(slow != fast){
        slow = slow->next;
        fast = fast->next;
    }

    return slow;
}

void removeLoop(Node* head){
    if(head == nullptr)
        return;
    
    Node* startingNode = staringOfLoop(head);
    Node* temp = startingNode;

    while(temp->next != startingNode){
        temp = temp->next;
    }

    temp->next = nullptr;
}

int main(){
    Node* head = new Node(1);
    insertAtHead(head, 2);
    insertAtHead(head, 3);
    insertAtHead(head, 4);
    cout<<"Original Linked List: ";
    printLinkedList(head);

    if(hasLoop(head)){
        cout<<"Yes, it has loop"<<endl;
    } else{
        cout<<"No, it doesn't have loop"<<endl;
    }

    cout<<staringOfLoop(head)<<endl;

    delete head;
    return 0;
}