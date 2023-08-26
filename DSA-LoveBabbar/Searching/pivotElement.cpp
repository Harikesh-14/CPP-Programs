#include<iostream>
using namespace std;

int getPivot(int *arr, int size){
    int start = 0, end = size - 1;
    int mid = start + (end-start)/2;

    while(start < end){
        if(arr[mid] >= arr[0]){
            start = mid + 1;
        } else{
            end = mid;
        }
        mid = start + (end-start)/2;
    }
    // Here, start and end both will work
    return start;
}

int main(){
    int arr[] = {3, 8, 10, 17, 1};
    int size = sizeof(arr)/sizeof(int);

    cout<<"The pivot in the array is at index "<<getPivot(arr, size)<<endl;
    return 0;
}