// This code is not for large numbers
#include<iostream>
using namespace std;

int climbingStairs(int n){
    if(n < 0)
        return 0;
    if(n == 0)
        return 0;

    return climbingStairs(n-1) + climbingStairs(n-2);
}

int main(){
    int n;
    cin>>n;

    if(climbingStairs(n) == 0){
        cout<<"Mei sahi salamat pohonch gaya"<<endl;
    } else{
        cout<<"Mei sahi salamat nhi pohoncha"<<endl;
    }
    return 0;
}