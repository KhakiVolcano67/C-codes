#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"A simple calculator"<<endl;
    cout<<"enter the 1st number: ";
    cin>>a;
    cout<<"enter the 2nd number: ";
    cin>>b;
    cout<<"enter the operation you want to perform (+, -, *, /): ";
    char op;
    cin>>op;
    switch(op){
        case'+':
            cout<<a+b;
            break;
        case'-':
            cout<<a-b;
            break;
        case'*':
            cout<<a*b;
            break;
        case'/':
            if(b!=0){
                cout<<a/b;
                break;
                }
            else{
                cout<<"not possible";
                break;
            }
        default:
            cout<<"invalid operation";
            break;                
    }
} 