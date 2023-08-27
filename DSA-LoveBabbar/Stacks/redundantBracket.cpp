#include<iostream>
#include<stack>
using namespace std;

bool findRedundantBrackets(string &s){
    stack<char> temp;

    for(int i=0; i<s.length(); i++){
        char ch = s[i];

        if(ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/'){
            temp.push(ch);
        } else{
            // if ch is ')' or lowercase character
            if(ch == ')'){
                bool isRedundant = true;
                while(temp.top() != '('){
                    char st = temp.top();
                    if(st == '+' || st == '-' || st == '*' || st == '/'){
                        isRedundant = false;
                    }
                    temp.pop();
                }
                if(isRedundant == true){
                    return true;
                } temp.pop();
            }
        }
    }
    return false;
}

int main(){
    string expression = "((a+b)+c)";
    if (findRedundantBrackets(expression)) {
        cout << "Redundant brackets found." << endl;
    } else {
        cout << "No redundant brackets found." << endl;
    }
    return 0;
}