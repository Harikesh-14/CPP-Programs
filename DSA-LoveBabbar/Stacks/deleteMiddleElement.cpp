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
            // cout<<arr[top]<<endl;
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

    ~Stack(){
        delete[] arr;
    }
};

void solve(Stack &temp, int count, int size) {
    // base case
    if (count == size/2) {
        temp.pop();
        return;
    }

    int num = temp.peek();
    temp.pop();

    // Recursion
    solve(temp, count+1, size);

    temp.push(num);
}

void deleteMiddleElement(Stack &temp, int N){
    int count = 0;
    solve(temp, count, N);
}

int main(){
    Stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.isFull();

    deleteMiddleElement(st, 5);
    st.isFull();

    return 0;
}