/* You are given two arrays 'A' and 'B' of size 'N' and 'M' respectively. Both these arrays are sorted
in non-decreasing order. You have to find the intersection of these two arrays. */
#include<iostream>
#include<vector>
using namespace std;

vector<int> intersection(vector<int> &arr1, int n, vector<int> &arr2, int m){
    vector<int> ans;
	int i = 0, j = 0;
	while(i<n && j<m){
		if(arr1[i] == arr2[j]){
			ans.push_back(arr1[i]);
			i++;
			j++;
		} else if(arr1[i] < arr2[j]){
			i++;
		} else{
			j++;
		}
	}
	return ans;
}

int main(){
    vector<int> arr1 = {1, 2, 2, 2, 3, 4};
    int size1 = 6;
    vector<int> arr2 = {2, 2, 3, 3};
    int size2 = 4;

    for(auto elem: intersection(arr1, size1, arr2, size2)){
        cout<<elem<<" ";
    }cout<<endl;

    return 0;
}