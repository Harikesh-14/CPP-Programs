/*
Yeh program tabhi chalega jab ek lagatar same keys ho array mei
*/
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

int main(){
    int arr[] = {1, 3, 2, 3, 3, 3, 6};
    int size = 7;
    int key = 3;
    
    cout<<"The first occurrence of "<<key<<" is "<<firstOccurrence(arr, size, key)<<endl;
    cout<<"The last occurrence of "<<key<<" is "<<lastOccurrence(arr, size, key)<<endl;
    return 0;
}