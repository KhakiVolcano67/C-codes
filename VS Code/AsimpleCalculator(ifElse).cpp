#include<iostream>
using namespace std;
int main(){
    int a,b;
    char cp;
    cout<<"A simple calulator"<<endl;
    cout<<"enter the 1st number: ";
    cin>>a;
    cout<<"enter the 2nd number: ";
    cin>>b;
    cout<<"enter the operation you want to perform (+, -, *, /): ";
    cin>>cp;
    if(cp=='+'){
        cout<<a+b;
    }
    else if(cp=='-'){
        cout<<a-b;
    }
    else if(cp=='*'){
        cout<<a*b;
    }
    else if(cp=='/'){
        if(b!=0){
            cout<<a/b;
        }
        else{
            cout<<"not possible";
        }
    }
    else{
        cout<<"invalid operation";
    }
}
