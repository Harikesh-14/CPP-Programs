#include<iostream>
using namespace std;

void bubbleSort(int arr[], int size){
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int binarySearch(int *arr, int start, int end, int key){
    int size = sizeof(arr) / sizeof(arr[0]);
    int mid = (start + end)/2;

    if(arr[mid] == key){
        return 1;
    } 
    
    if(arr[mid] > key){
        binarySearch(arr, start, mid-1, key);
    } else if(arr[mid] < key){
        binarySearch(arr, mid+1, end, key);
    }
    return -1;
}

int main(){
    int arr[] = {39, 32, 5, 24, 86, 29};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout<<"Array before: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    } cout<<endl;

    bubbleSort(arr, n);

    cout<<"Array after: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    } cout<<endl;

    if(binarySearch(arr, 0, n, 32) == 1){
        cout<<"Found"<<endl;
    } else{
        cout<<"Not found"<<endl;
    }
    return 0;
}