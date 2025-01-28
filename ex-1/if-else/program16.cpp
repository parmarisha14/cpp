#include<iostream>
#include<string>
using namespace std;
int main(){
    string username,password;
    cout<<"enter usename: ";
    cin>>username;
    cout<<"enter password: ";
    cin>>password;
    if(username=="admin"&&password=="1234"){
        cout<<"Login succesful"<<endl;
    }
    else{
        cout<<"Invalid"<<endl;
    }
    return 0;
}