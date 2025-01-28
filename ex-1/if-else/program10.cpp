#include<iostream>
using namespace std;
int main(){
    int choice;
    double num1,num2;
    cout<<"Menu:\n";
    cout<<"1.Addition\n 2.Subtraction\n3.Multiplication\n4.Division\n";
    cout<<"Enter your choice(1-4): ";
    cin>>choice;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    switch(choice){
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
            cout<<"Invalid choice!."<<endl;
    }
}