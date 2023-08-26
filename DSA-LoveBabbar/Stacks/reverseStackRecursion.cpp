#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int> &temp, int elem){
    if(temp.empty()){
        temp.push(elem);
        return;
    }

    int num = temp.top();
    temp.pop();

    insertAtBottom(temp, elem);

    temp.push(num);
}

void reverseStack(stack<int> &temp){
    if(temp.empty()){
        return;
    }

    int num = temp.top();
    temp.pop();

    reverseStack(temp);
    insertAtBottom(temp, num);
}

int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.top()<<endl;

    reverseStack(st);
    
    cout<<st.top()<<endl;
    return 0;
}