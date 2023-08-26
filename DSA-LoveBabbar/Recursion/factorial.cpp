#include<iostream>
using namespace std;

int factorial(int n){
    if(n == 0){
        // It is mandatory to use "return in base case of a recursion"
        return 1;
    }
    return n * factorial(n-1);
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int ans = factorial(n);
    cout<<"Factorial is "<<ans<<endl;
    return 0;
}