#include<iostream>
using namespace std;

int printCount(int n){
    if (n == 1){
        return 1;
    }
    cout<<n<<endl;
    return printCount(n-1);
}

int main(){
    int num;
    cout<<"Till where you want to print the numbers: ";
    cin>>num;

    cout<<printCount(num)<<endl;
    return 0;
}