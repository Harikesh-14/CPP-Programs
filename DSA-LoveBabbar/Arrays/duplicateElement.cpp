/*You are given an array ‘ARR’ of size ‘N’ containing each number between 1 and ‘N’ - 1 at least once. 
There is a single integer value that is present in the array twice. Your task is to find the duplicate 
integer value present in the array.*/

#include<iostream>
using namespace std;

int printDuplicate(int *arr, int size){
    int ans = 0;
    for(int i=0; i<size; i++){
        ans = ans ^ arr[i];
    }

    for(int i=1; i<size; i++){
        ans = ans ^ i;
    }
    return ans;
}

int main(){
    int arr[5] = {4, 2, 1, 3, 1};
    int size = 5;

    cout<<"The duplicate element is: "<<printDuplicate(arr, size)<<endl;
    return 0;
}