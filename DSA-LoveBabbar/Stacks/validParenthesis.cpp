#include<iostream>
#include<stack>
using namespace std;

bool isValidParenthesis(string expression){
        stack<char> s;

        for(int i=0; i<expression.length(); i++){
            char ch = expression[i];

            // if the loop encounters an opening bracket, then it will push it in the stack
            if(ch == '(' || ch == '{' || ch == '['){
                s.push(ch);
            } else{
                // if the loop finds a closing bracket, then it will pop the top of the array
                if(!s.empty()){
                    char top = s.top();
                    s.pop();

                    if((ch == ')' && top != '(') || (ch == '}' && top != '{') || (ch == ']' && top != '[')){
                        return false;
                    }
                } else{
                    return false;
                }
            }
        }

        if(s.empty()){
            return true;
        } else{
            return false;
        }
    }

int main(){
    if(isValidParenthesis("()[()]{}}") == true){
        cout<<"Balanced"<<endl;
    } else{
        cout<<"Not balanced"<<endl;
    }

    return 0;
}