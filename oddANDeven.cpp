#include<iostream>
using namespace std;
int evenORodd(int num){
    if(num%2==0){
        return 1;
    } else{
        return 0;
    }
}
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if(evenORodd(num) == 1){
        cout<<"Even"<<endl;
    } else{
        cout<<"Odd"<<endl;
    }
    return 0;
}