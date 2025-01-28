#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter a number: ";
    cin>>num;
    string result =(num>0)?"Positive":(num<0)?"negative":"zero";
    cout<<"the result is "<<result<<"."<<endl;
    return 0;
}
