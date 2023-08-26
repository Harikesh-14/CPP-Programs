#include<iostream>
using namespace std;

class Stack{
    public:
    int *arr;
    int size;
    int top;

    Stack(int s){
        this->size = s;
        this->arr = new int[size];
        this->top = -1;
    }

    void push(int elem){
        if(size - top > 1){
            top++;
            arr[top] = elem;
        } else{
            cout<<"Stack Overflow"<<endl;
        }
    }

    int peek(){
        if(top >= 0){
            cout<<arr[top]<<endl;
            return arr[top];
        } else{
            cout<<"The stack is empty"<<endl;
            return -1;
        }
    }

    void pop(){
        if(top >= 0){
            top--;
        } else{
            cout<<"Stack underflow"<<endl;
        }
    }

    void isFull() {
        if (top >= size - 1) {
            cout << "The stack is full" << endl;
        } else {
            cout << "The stack is not full" << endl;
        }
    }

    int isEmpty() {
        if(top >= -1){
            return 1;
        } else{
            return 0;
        }
    }

    ~Stack(){
        delete[] arr;
    }
};

void insertAtEnd(Stack &temp, int elem){
    if(temp.isEmpty()){
        temp.push(elem);
        return;
    }

    int num = temp.peek();
    temp.pop();

    insertAtEnd(temp, elem);

    temp.push(num);
}

int main(){
    Stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.isFull();
    
    insertAtEnd(st, 5);

    st.isFull();
    return 0;
}