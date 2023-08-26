#include<iostream>
#include<math.h>
using namespace std;

int power(int a, int b){
    if(b==0){
        return 1;
    }
    if(b%2==0){
        return pow(a, b/2) * power(a, b/2);
    } else{
        return a * power(a, (b-1)/2) * pow(a, (b-1)/2);
    }
}

int main(){
    int num1, num2;
    cout<<"Enter numbers: ";
    cin>>num1>>num2;

    cout<<power(num1, num2)<<endl;
    return 0;
}