#include<iostream>
using namespace std;

int peak(int *arr, int size){
    int start = 0, end = size - 1;
    int mid = start + (end - start)/2;

    while(start < end){
        if(arr[mid] < arr[mid+1]){
            start = mid + 1;
        } else{
            end = mid;
        }
        mid = start + (end-start)/2;
    }
    return arr[mid];
}

int main(){
    int arr[] = {0, 10, 12, 5, 2};
    int size = sizeof(arr)/sizeof(int);
    
    cout<<"Peak of this array is "<<peak(arr, size)<<endl;

    return 0;
}