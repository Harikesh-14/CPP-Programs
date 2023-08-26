#include<iostream>
using namespace std;

int binarySearch(int *arr, int size, int key){
    int start = 0, end = size-1;
    int mid = start + (end - start)/2;

    while(start <= end){
        if(arr[mid] == key){
            return mid;
        } 
        
        if(arr[mid] > key){
            end = mid - 1;
        } else{
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
    return -1;
}

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    int key = 3;

    if(binarySearch(arr, size, key) == -1){
        cout<<"Key is not present in the array"<<endl;
    } else{
        cout<<"Key is present at index "<<binarySearch(arr, size, key)<<endl;
    }

    return 0;
}