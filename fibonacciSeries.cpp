#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int a=0, b=1, c=0;
    cout<<a<<", "<<b<<", ";
    c = a + b;
    while(c<=num){
        cout<<c<<", ";
        a = b;
        b = c;
        c = a+b;
    }
    return 0;
}