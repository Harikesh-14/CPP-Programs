#include<iostream>
using namespace std;
int sum(int num1){
    int add = 0;
    for(int i=0; i<=num1;i++){
        add += i;
    }
    return add;
}
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    cout<<sum(num);
    return 0;
}
