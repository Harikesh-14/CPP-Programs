#include<iostream>
using namespace std;
int main(){
    int num, current_digit,rev=0;
    cout<<"Enter a number: ";
    cin>>num;
    while(num>0){
        current_digit = num%10;
        rev = rev*10 + current_digit;
        num /= 10;
    }
    cout<<rev<<endl;
    return 0;
}