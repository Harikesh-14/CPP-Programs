#include<iostream>
using namespace std;

int inversionCount(int *arr, int size){
    int count = 0;
    for(int i=0; i<size-1; i++){
        for(int j=i+1; j<size; j++){
            if(arr[i] > arr[j]){
                count++;
            }
        }
    }
    return count;
}

int main(){
    // int arr[] = {3, 4, 2, 6, 1, 34};
    // int arr[] = {1, 2, 3, 4, 5, 6};
    int arr[] = {6, 5, 4, 3, 2, 1};
    int size = 6;

    cout<<inversionCount(arr, size)<<endl;
    return 0;
}