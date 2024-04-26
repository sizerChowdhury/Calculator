#include<bits/stdc++.h>
using namespace std;


int main(){
    int num1,num2;
    cin>>num1>>num2;

    cout<<"Enter number 1: ";
    cin>>num1;
    cout<<"\nEnter number 2: ";
    cin>>num2;
    
    char operation;
    cout<<"\nEnter Operator: ";
    cin>>operation;
    cout<<endl;

    switch{
        case('+'){
            addition(num1,num2);
            break;
        }
        case('-'){
            subsitutioin(num1,num2);
            break;
        }
        case('*'){
            multiplication(num1,num2);
            break;
        }
        case('/'){
            division(num1,num2);
            break;
        }
        default:
            cout<<"Invalid operation"<<endl;

    }
    return 0;

}