#include<iostream>
using namespace std;
int main(){
    char op;
    double num1,num2;
    cout<<"enter the operator(+,-,*,/): ";
    cin>>op;
    cout<<"enter first number: ";
    cin>>num1;
    cout<<"enter second number: ";
    cin>>num2;
    switch(op){
        case '+':
            cout<<"Result:"<<num1+num2<<endl;
        break;
        case '-':
            cout<<"Result:"<<num1-num2<<endl;
        break;
        case '*':
            cout<<"Result:"<<num1*num2<<endl;
        break;
        case '/':
            if(num2!=0)
            {
                 cout<<"Result:"<<num1/num2<<endl;
            }
            else
            {
                 cout<<"Error!Divison by zero."<<endl;
            }
        break;
        default:
            cout<<"Invalid operator."<<endl;
    } 
    return 0;
}