#include<iostream>
using namespace std;
int alphaCheck(char ch){
    if((ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u')){
        return 1;
    } else{
        return 0;
    }
}
int main(){
    char ch;
    cout<<"Enter an alphabet: ";
    cin>>ch;
    if(alphaCheck(ch)==1){
        cout<<"Vowel";
    } else{
        cout<<"Consonant";
    }
    return 0;
}