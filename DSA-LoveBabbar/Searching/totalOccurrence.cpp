#include<iostream>
using namespace std;

int firstOccurrence(int *arr, int size, int key){
    int start = 0, end = size - 1;
    int mid = start + (end - start)/2;
    int ans = -1;

    while(start <= end){
        if(arr[mid] == key){
            ans = mid;
            end = mid - 1;
        } else if(arr[mid] > key){
            start = mid + 1;
        } else{
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

int lastOccurrence(int *arr, int size, int key){
    int start = 0, end = size - 1;
    int mid = start + (end - start)/2;
    int ans = -1;

    while(start <= end){
        if(arr[mid] == key){
            ans = mid;
            start = mid + 1;
        } else if(arr[mid] > key){
            end = mid - 1;
        } else{
            start = mid + 1;   
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

int totalOccurrence(int *arr, int size, int key){
    return lastOccurrence(arr, size, key) - firstOccurrence(arr, size, key) + 2;
}

int main(){
    int arr[] = {1, 2, 3, 3, 3, 3, 5};
    int size = 7;
    int key = 3;

    cout<<"Total Occurrence is "<<totalOccurrence(arr, size, key)<<endl;

    return 0;
}