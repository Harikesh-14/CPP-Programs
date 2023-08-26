#include<bits/stdc++.h>
using namespace std;

int getPivot(vector<int> arr, int n){
    int s = 0;
    int e = n - 1;
    int mid = s + (e-s)/2;

    while(s < e){
        if(arr[mid] >= arr[0]){
            s = mid + 1;
        } else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}

int binarySearch(vector<int> arr, int s, int e, int key){
    int start = s;
    int end = e;
    int mid = start + (end - start)/2;

    while(start <= end){
        if(arr[mid] == key){
            return mid;
        } else if(arr[mid] > key){
            end = mid - 1;
        } else{
            start = mid + 1;
        }
        mid = start + (end-start)/2;
    }
    return -1;
}

int findPosition(vector<int>& arr, int n, int k)
{
    int pivot = getPivot(arr, n);
    if(k >= arr[pivot] && k <= arr[n-1]){
        return binarySearch(arr, pivot, n-1, k);
    } else{
        return binarySearch(arr, 0, pivot, k);
    }
}

int main(){
    vector<int> arr = {8, 9, 4, 5};
    int size = arr.size();
    int key = 4;

    if(findPosition(arr, size, key) == -1){
        cout<<key<<" is not present in the array"<<endl;
    } else{
        cout<<key<<" is present at index "<<findPosition(arr, size, key)<<endl;
    }

    return 0;
}