#include<iostream>
using namespace std;

int fibonacciSeries(int n){
    if(n == 1){
        return 1;
    }
    if(n == 0){
        return 0;
    }
    return fibonacciSeries(n-1) + fibonacciSeries(n-2); 
}

int main(){
    int n;
    cout<<"Which term do you want to find: ";
    cin>>n;

    cout<<fibonacciSeries(n)<<" ";
    return 0;
}