#include<iostream>
#include<string>
using namespace std;

class Stack{
    public:
    string* arr;
    int top;
    int size;

    Stack(int s){
        this->size = s;
        this->top = -1;
        this->arr = new string[size];
    }

    int push(string elem){
        if(size - top > 1){
            top++;
            arr[top] = elem;
        } else{
            cout<<"Stack Overflow"<<endl;
            return -1;
        }
        return 0;
    }

    void pop(){
        if(top >= 0){
            top--;
        } else{
            cout<<"Stack Underflow"<<endl;
        }
    }

    void peek(){
        if(top >= 0){
            cout<<arr[top]<<" ";
        } else{
            cout<<"The stack is empty"<<endl;
        }
    }

    int isEmpty(){
        if(top == -1){
            return 1;
        }else{
            return 0;
        }
    }

    ~Stack(){
        delete[] arr;
    }
};

int main(){
    Stack s(4);
    s.push("h");
    s.push("a");
    s.push("r");
    s.push("i");

    while(!s.isEmpty()){
        s.peek();
        s.pop();
    }

    return 0;
}