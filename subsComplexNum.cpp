#include<iostream>
using namespace std;
int main(){
    float real1, real2, imag1, imag2;
    cout<<"Enter the real and imag: ";
    cin>>real1>>imag1;
    cout<<"Enter the real and imag: ";
    cin>>real2>>imag2;

    float real = real1 - real2;
    float imag = imag1 - imag2;

    if(imag>0){
        cout<<real<<"+"<<imag<<"i";
    } else if(imag<0){
        cout<<real<<imag<<"i";
    }
    return 0;
}