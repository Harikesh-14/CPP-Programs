#include<iostream>
using namespace std;

void selectionSort(int *arr, int size){
    for(int i=0; i<size-1; i++){
        int minIndex = i;
        for(int j=i+1; j<size; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    } 
}

void printArray(int *arr, int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

int main(){
    int arr[] = {5, 4, 3, 2, 1};
    int size = 5;

    cout<<"Before sorting: ";
    printArray(arr, size);

    selectionSort(arr, size);

    cout<<"After sorting: ";
    printArray(arr, size);
    return 0;
}