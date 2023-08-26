#include<iostream>
using namespace std;

int maximum(int *arr, int size){
    int max = INT32_MIN;

    for(int i=0; i<size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

int main(int argc, char const *argv[]){
    int arr[] = {1, 12, 61, 400, 51};
    int size = 5;

    cout<<maximum(arr, size)<<endl;
    return 0;
}
