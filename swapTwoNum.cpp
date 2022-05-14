#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the two number: ";
    int num1, num2;
    cin>>num1>>num2;
    int temp = num1;
    num1 = num2;
    num2 = temp;
    cout<<"Swapped numbers are: "<<num1<<" "<<num2;
    return 0;
}