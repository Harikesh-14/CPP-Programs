#include <iostream>
using namespace std;
int main(){
    int num, current_digit, rev = 0, temp;
    cout<<"Enter a Number: ";
    cin>>num;
    temp=num;
    while(num > 0){
        current_digit=num%10;
        rev=(rev*10)+current_digit;
        num=num/10;
    }
    if (temp==rev){
        cout<<"Number is Palindrome.";
    } else{
        cout<<"Number is not Palindrome.";
    }
    return 0;
}