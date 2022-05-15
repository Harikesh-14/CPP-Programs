#include<iostream>
using namespace std;
int main(){
    int num1, num2, hcf;
    cout<<"Enter the two numbers: ";
    cin>>num1>>num2;
    if(num2>num1){
        int temp = num2;
        num2 = num1;
        num1 = temp;

    }
    for(int i=1; i<=num2; i++){
        if(num1%i==0 && num2%i==0){
            hcf = i;
        }
    } cout<<hcf<<endl;
    return 0;
}