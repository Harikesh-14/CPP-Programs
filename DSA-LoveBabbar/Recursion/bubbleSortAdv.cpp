#include<iostream>
using namespace std;

void sortArray(int *arr, int n){
    if(n==0 || n==1){
        return;
    }
    for(int i=0; i<n-1; i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i], arr[i+1]);
        }
    }
    return sortArray(arr, n-1);
}

int main(){
    int size;
    cout<<"Enter size: "<<endl;
    cin>>size;

    int arr[size];
    cout<<"Enter elements: "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    sortArray(arr, size);

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}