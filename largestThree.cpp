#include<iostream>
using namespace std;
int greaterNum(int num1, int num2, int num3){
    if((num1>num2) && (num1>num3)){
        return 1;
    } else if((num2>num1) && (num2>num3)){
        return 2;
    } else{
        return 3;
    }
}
int main(){
    int a,b,c;
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;
    if(greaterNum(a,b,c)==1){
        cout<<"Greatest number is "<<a<<endl;
    } else if(greaterNum(a,b,c)==2){
        cout<<"Greatest number is "<<b<<endl;
    } else{
        cout<<"Greatest number is "<<c<<endl;
    }
    return 0;
}