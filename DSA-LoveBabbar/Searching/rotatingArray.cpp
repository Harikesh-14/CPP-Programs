#include<iostream>
using namespace std;

void rotate(int *arr, int size, int rot){
    int temp[size];
    int k=0;
    
    for(int i=size-rot; i<size; i++){
        temp[k++] = arr[i];
    }

    for(int i=0; i<size-rot; i++){
        temp[k++] = arr[i];
    }
    
    for(int i=0; i<size; i++){
        arr[i] = temp[i];
    }
}

void printArray(int *arr, int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    int rot = 3;
    cout<<"Array before rotation: ";
    printArray(arr, size);

    rotate(arr, size, rot);
    cout<<"Array after rotation: ";
    printArray(arr, size);
    return 0;
}