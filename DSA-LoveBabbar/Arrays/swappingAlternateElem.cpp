#include<iostream>
using namespace std;

void swap(int *arr, int n){
    for(int i=0; i<n; i=i+2){
        swap(arr[i], arr[i+1]);
    }
}

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;

    swap(arr, size);

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}