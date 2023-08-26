#include<iostream>
using namespace std;

int linearSearch(int *arr, int size, int key){
    for(int i=0; i<size; i++){
        if(arr[i] == key){
            return i;
            break;
        }
    }
    return -1;
}

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    int key = 8;

    if(linearSearch(arr, size, key) == -1){
        cout<<"Key is not present in the array"<<endl;
    } else{
        cout<<"Key is present at index "<<linearSearch(arr, size, key)<<endl;
    }

    return 0;
}