#include<iostream>
using namespace std;
int leapYear(int year){
    if(year%4==0){
        return 0;
    } else{
        return 1;
    }
}
int main(){
    int year;
    cout<<"Enter any year: ";
    cin>>year;
    if(leapYear(year)==0){
        cout<<"Leap Year";
    } else{
        cout<<"Not a leap year";
    }
    return 0;
}