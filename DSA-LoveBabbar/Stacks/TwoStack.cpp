#include<iostream>
using namespace std;

class Stack{
    public:
    int *arr;
    int size;
    int top1, top2;

    Stack(int s){
        this->size = s;
        this->top1 = -1;
        this->top2 = s;
        this->arr = new int[size];
    }

    int push1(int elem){
        if(top2 - top1 > 1){
            top1++;
            arr[top1] = elem;
        } else{
            cout<<"Stack Overflow"<<endl;
            return -1;
        }
        return 0;
    }

    int push2(int elem){
        if(top2 - top1 > 1){
            top2--;
            arr[top2] = elem;
        } else{
            cout<<"Stack Overflow"<<endl;
            return -1;
        }
        return 0;
    }

    void peek(){
        if(top1 > -1 && top2 < size){
            cout<<arr[top1]<<" and "<<arr[top2]<<endl;
        } else{
            cout<<"Stack Underflow"<<endl;
        }
    }

    ~Stack(){
        delete[] arr;
    }
};

int main(){
    Stack s(2);
    s.push1(2);
    s.push2(1);

    s.peek();

    return 0;
}