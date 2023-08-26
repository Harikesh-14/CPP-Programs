#include<iostream>
using namespace std;

class Stack{
    public:
    int *arr;
    int size;
    int top;

    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){
        if(size - top > 1){
            top++;
            arr[top] = element;
        } else{
            cout<<"Stack overflow"<<endl;
        }
    }

    void pop(){
        if(top >= 0){
            top--;
        } else{
            cout<<"Stack Underflow"<<endl;
        }
    }

    int peek(){
        if(top >= 0){
            return arr[top];
        } else{
            cout<<"The stack is empty";
            return -1;
        }
    }

    bool isEmpty(){
        if(top == -1){
            return true;
        } else{
            return false;
        }
    }

    bool isFull(){
        if(size - top == 1){
            return true;
        } else{
            return false;
        }
    }
};

int main(){
    Stack st(5);

    st.push(1);
    st.push(2);
    st.push(3);

    if(st.isFull()){
        cout<<"Stack is Full"<<endl;
    } else{
        cout<<"Stack is not full"<<endl;
    }

    cout<<st.peek()<<endl;

    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();

    if(st.isEmpty()){
        cout<<"Stack is empty";
    } else{
        cout<<"Stack is not empty";
    }
    return 0;
}