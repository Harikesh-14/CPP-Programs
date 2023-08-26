#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int key){
    // base case
    if(n == 0){
        return 0;
    }

    if(arr[0] == key){
        return 1;
    } else{
        return linearSearch(arr+1, n-1, key);
    } 
}

int main(){
    int arr[] = {3, 4, 1, 5, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    if(linearSearch(arr, size, 33) == 1){
        cout<<"Found"<<endl;
    } else{
        cout<<"Not found"<<endl;
    }
    return 0;
}