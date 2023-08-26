#include<iostream>
using namespace std;

long long int squareRoot(int num){
    int start = 0, end = num;
    long long int mid = start + (end-start)/2;
    long long int ans = -1;

    while(start <= end){
        if((mid*mid) == num){
            return mid;
        } else if((mid*mid) < num){
            ans = mid;
            start = mid+1;
        } else{
            ans = mid;
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

double morePrecession(int num, int precession, int tempSolution){
    double factor = 1;
    double result = tempSolution;
    for(int i = 0; i < precession; i++){
        factor = factor / 10;

        for(double j=num; j*j < num; j=j+factor){
            result = j;
        }
    }
    return result;
}

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    cout<<"Square root of "<<num<<" is "<<morePrecession(num, 3, squareRoot(num))<<endl;
    return 0;
}