#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    int max=(a>b)? a:b;
    cout<<"The maximum number is: "<<max<<endl;
    return 0;
}