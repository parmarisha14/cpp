#include<iostream>
using namespace std;
int main(){
    int side1,side2,side3;
    cout<<"Enter first sides of a triangle: ";
    cin>>side1;
    cout<<"Enter second sides of a triangle: ";
    cin>>side2;
    cout<<"Enter third sides of a triangle: ";
    cin>>side3;
    if(side1+side2>side3&&side1+side3>side2&&side2+side3>side1){
        cout<<"The triangle is valid."<<endl;
    }
    else{
        cout<<"The triangle is not valid."<<endl;
    }
    return 0;
}