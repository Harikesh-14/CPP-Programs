#include<iostream>
using namespace std;

int printUnique(int *arr, int n){
    int unique = 0;
    for(int i=0; i<n; i++){
        unique = unique ^ arr[i];
    }
    return unique;
}

int main(){
    int arr[7] = {1, 1, 5, 3, 3, 2, 2};
    int size = 7;

    cout<<"The unique element is: "<<printUnique(arr, size)<<endl;
    return 0;
}