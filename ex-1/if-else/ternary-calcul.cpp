#include<iostream>
using namespace std;
int main(){
    double num1,num2;
    char op;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    cout<<"Enter operator(+,-,*,/): ";
    cin>>op;
    double result=(op=='+')?(num1+num2):
                (op=='-')?(num1-num2):
                (op=='*')?(num1*num2):
                (op=='/'&&num2!=0)?(num1/num2):0;
    if(op=='/' &&num2==0){
        cout<<"Error!Division by zero."<<endl;
    }
    else{
        cout<<"Result: "<<result<<endl;
    }
    return 0;
}