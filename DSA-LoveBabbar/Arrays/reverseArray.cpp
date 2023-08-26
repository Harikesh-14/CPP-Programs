#include<iostream>
using namespace std;

void reverse(int *arr, int start, int end){
    while(start < end){
        // here the main logic is to swap the starting and ending elements of the array
        // then increasing the value of start and decreasing the value of end
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    
    reverse(arr, 0, size-1);
    
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}