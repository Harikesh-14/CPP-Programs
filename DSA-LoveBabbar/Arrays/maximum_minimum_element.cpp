#include<iostream>
using namespace std;

int minimum(int *arr, int size){
    int min = INT32_MAX;

    for(int i=0; i<size; i++){
        if(min > arr[i]){
            min = arr[i];
        }
    }
    return min;
}

int maximum(int arr[], int size){
    int max = INT32_MIN;

    for(int i=0; i<size; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    return max;
}

int main(){
    int arr[] = {5, 4, 3, 2, 6};
    int size = 5;

    cout<<"The smallest element in the array is: "<<minimum(arr, size)<<endl;
    cout<<"The largest element in the array is: "<<maximum(arr, size)<<endl;

    return 0;
}