#include<iostream>
using namespace std;
int main(){
    int num1, num2, lcm;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    int max = (num1>num2)?num1:num2;
    do{
        if(max%num1==0 && max%num2==0){
            lcm = max;
            cout<<"LCM is "<<lcm;
            break;
        } else{
            ++max;
        }
    } while(true);
    return 0;
}