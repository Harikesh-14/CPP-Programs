#include<iostream>
using namespace std;
int main(){
    int num1, num2, *pnum1, *pnum2;
    char oper;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    pnum1 = &num1;
    pnum2 = &num2;
    cout<<"Which operation you want to perform: [+,-,*,/]: ";
    cin>>oper;
    if(oper=='+'){
        int sum = *pnum1 + *pnum2;
        cout<<sum;
    } else if(oper=='-'){
        int diff = *pnum1 - *pnum2;
        cout<<diff;
    } else if(oper=='*'){
        int prod = *pnum1 * *pnum2;
        cout<<prod;
    } else if(oper=='/'){
        int quo = *pnum1 / *pnum2;
        cout<<quo;
    } else{
        cout<<"INVALID OPERATION";
    }
    return 0;
}