#include<iostream>
using namespace std;

int sum(int arr[], int n){
    int arr_sum = arr[1];
    if(n == 0){
        return 0;
    }
    
    if(n == 1){
        return arr[0];
    } else{
        return arr[0] + sum(arr+1, n-1);
    }
}

int main(){
    int arr[] = {3, 2, 5, 1, 6};    
    int size = sizeof(arr) / sizeof(arr[0]);

    cout<<sum(arr, size)<<endl;
    return 0;
}