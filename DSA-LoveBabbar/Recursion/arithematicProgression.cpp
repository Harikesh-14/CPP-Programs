#include<iostream>
using namespace std;

int arithematicProgression(int a, int d, int n){
    if(n == 1){
        return a + (n-1)*d;
    }
    cout<<a + (n-1)*d<<" "<<endl;
    return arithematicProgression(a, d, n-1);
}

int main(){
    int a, d, n;
    cout<<"Enter the first term: ";
    cin>>a;
    cout<<"Enter the common difference: ";
    cin>>d;
    cout<<"How mant terms do you want: ";
    cin>>n;

    cout<<arithematicProgression(a, d, n)<<endl;
    return 0;
}