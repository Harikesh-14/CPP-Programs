#include<iostream>
#include<stack>
using namespace std;

void sortedInsert(stack<int> &stack, int num){
    if(stack.empty() || (!stack.empty() && stack.top() < num)){
        stack.push(num);
        return;
    }

    int n = stack.top();
    stack.pop();

    sortedInsert(stack, num);

    stack.push(n);
}

void sortStack(stack<int> &stack){
    if(stack.empty()){
        return;
    }

    int num = stack.top();
    stack.pop();

    sortStack(stack);

    sortedInsert(stack, num);
}

int main(){
    stack<int> s;
    s.push(9);
    s.push(2);
    cout<<s.top()<<endl;

    sortStack(s);

    cout<<s.top()<<endl;
    return 0;
}