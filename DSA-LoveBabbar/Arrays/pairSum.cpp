#include <bits/stdc++.h>
using namespace std;

vector<vector <int>> pairSum(vector<int> &arr, int sum){
    vector< vector<int> > nums;
    for(int i=0; i<arr.size(); i++){
        for(int j=i+1; j<arr.size(); j++){
            if(arr[i] + arr[j] == sum){
                vector<int> temp;
                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));
                nums.push_back(temp);
            }
        }
    }
    sort(nums.begin(), nums.end());
    return nums;
}

int main(){
    vector<int> arr = {2, -3, 3, 3, -2};
    int sum = 0;

    for (int i = 0; i < pairSum(arr, sum).size(); i++) {
        for (int j = 0; j < pairSum(arr, sum)[i].size(); j++)
            cout << pairSum(arr, sum)[i][j] << " ";
        cout << endl;
    }
    return 0;
}