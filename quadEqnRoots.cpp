#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the value of a, b and c: ";
    cin>>a>>b>>c;
    int det = (b*b-4*a*c);
    int root1, root2;
    if(det>0){
        root1 = (-b + sqrt(det))/2*a;
        root2 = (-b - sqrt(det))/2*a;
        cout<<"Root 1 is "<<root1<<" and Root 2 is "<<root2<<endl;
    } else if(det == 0){
        root1 = -b/2;
        cout<<"Root 1 is "<<root1<<" and Root 2 is "<<root1<<endl;
    } else{
        cout<<"Roots are imaginary"<<endl;
    }
    return 0;
}