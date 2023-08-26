#include<bits/stdc++.h>
using namespace std;

bool tripletSum(vector<int> &arr, int s){
    vector<vector<int>> ans;
    for(int i=0; i<ans.size()-2; i++){
        for(int j=i+1; j<arr.size()-1; j++){
            for(int k=j+1; k<arr.size(); k++){
                if(arr[i] + arr[j] + arr[k] == s){
                    vector<int> temp;
                    temp.push_back(arr[i]);
                    temp.push_back(arr[j]);
                    temp.push_back(arr[k]);
                    ans.push_back(temp);
                    
                    cout << "Triplet is " << arr[i] <<
                        " " << arr[j] << " " << arr[k]; 
                    return true; 
                } else{
                    return false;
                }
            }
        }
    }
    return false;
}

int main(int argc, char const *argv[]){
    vector<int> arr = {1, 2, 3, 1, 2, 3};
    int sum = 63;

    if(tripletSum(arr, sum) == false){
        cout<<"-1"<<endl;
    }
    return 0;
}
