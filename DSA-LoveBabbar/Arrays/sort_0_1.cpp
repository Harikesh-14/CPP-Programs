#include<bits/stdc++.h>
using namespace std;

void afterSort(int *arr, int n){
    int start = 0, end = n-1;
    while(start <= end){
        while(arr[start] == 0){
            start++;
        }
        while(arr[end] == 1){
            end--;
        }

        // else
        if(start < end){
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }
}

int main(){
    int arr[6] = {1, 0, 1, 0, 0, 0};
    int size = 6;
    afterSort(arr, size);

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" "; 
    }cout<<endl;

    return 0;
}