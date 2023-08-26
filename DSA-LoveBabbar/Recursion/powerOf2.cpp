#include<iostream>
using namespace std;

int powerOf2(int n){
    if(n == 0){
        return 1;
    }
    return 2 * powerOf2(n-1);
}

int main(){
    int p;
    cout<<"Till what power you want the output: ";
    cin>>p;

    cout<<powerOf2(p)<<endl;
    return 0;
}