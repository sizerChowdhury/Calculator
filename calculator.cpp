#include<bits/stdc++.h>
using namespace std;

void multiplication (int num1, int num2)
{
   cout<<num1 << " * " <<num2<<" = "<<num1*num2<<endl;
   return ;
}

void addition(int num1, int num2){
    cout<<num1 << " + " <<num2<<" = "<<num1+num2<<endl;
    return ;
}

void substract(int number1, int number2){
    cout<<num1 << " - " <<num2<<" = "<<num1-num2<<endl;
    return ;
}

void division(int num1,int num2){
     cout<<num1 << " / " <<num2<<" = "<<num1/num2<<endl;
     return ;
}



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
            substract(num1,num2);
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
