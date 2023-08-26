#include<iostream>
using namespace std;

bool checkPalindrome(string s, int i, int j){
    if(i>j)
        return true;
    
    if(s[i] != s[j]){
        return false;
    } else{
        // Here use i+1 instead of i++
        return checkPalindrome(s, i+1, j-1);
    }
}

int main(){
    string word;
    cout<<"Enter a word :";
    cin>>word;

    bool isPalindrome = checkPalindrome(word, 0, word.length()-1);

    if(isPalindrome){
        cout<<"The word is a Palindrome"<<endl;
    } else{
        cout<<"The word is not a Palindrome"<<endl;
    }
    return 0;
}