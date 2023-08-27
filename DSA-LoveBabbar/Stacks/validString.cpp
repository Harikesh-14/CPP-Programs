#include<iostream>
#include<stack>
using namespace std;

bool isValidBracket(string &expression) {
    stack<char> s;

    for (int i = 0; i < expression.length(); i++) {
        char ch = expression[i];

        if (ch == '{') {
            s.push(ch);
        } else if (ch == '}') {
            if (!s.empty() && s.top() == '{') { // s.top() was creating all the problem
                s.pop();
            } else {
                return false;
            }
        }
    }

    return s.empty(); 
}

int main() {
    string expression = "{}{}{}}";
    if (isValidBracket(expression)) {
        cout << "Yes, it is valid" << endl;
    } else {
        cout << "No, it is not valid" << endl;
    }
    return 0;
}
