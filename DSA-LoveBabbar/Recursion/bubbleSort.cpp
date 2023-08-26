#include<iostream>
using namespace std;

bool isSorted(int arr[], int n){
    if(n == 0 || n == 1){
        return true;
    }

    if(arr[0] > arr[1]){
        return false;
    } else{
        return isSorted(arr+1, n-1);
    }
}

int main(){
    // int arr[6] = {39, 32, 5, 24, 86, 29};
    int arr[6] = {1, 2, 3, 4, 6, 5};
    int size = 6;

    bool ans = isSorted(arr, size);
    
    if(ans == false) { 
        cout<<"Your array is not sorted"<<endl;
    } else{
        cout<<"Your array is already sorted"<<endl;
    }
    return 0;
}