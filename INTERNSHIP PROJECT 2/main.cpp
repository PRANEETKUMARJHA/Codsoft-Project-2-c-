#include <iostream>

using namespace std;

int main()
{
    double num1,num2;
    char operation;

    cout<<"enter first number";
    cin>>num1;

    cout<<"enter second number";
    cin>>num2;

    cout<<"Select operation(+,-,*,/):";
    cin>>operation;

    switch(operation){
     case '+':
        cout<<num1<<"+"<<num2<<"="<<num1+num2<<endl;
        break;

     case '-':
        cout<<num1<<"-"<<num2<<"="<<num1-num2<<endl;
        break;

     case '*':
        cout<<num1<<"*"<<num2<<"="<<num1*num2<<endl;
        break;

     case '/':
         if(num2!=0)
         {
             cout<<num1<<"/"<<num2<<"="<<num1/num2<<endl;
         }
         else{
            cout<<"Error division by zero"<<endl;
         }
         break;

    default:
        cout<<"Invalid operator !!"<<endl;
        break;

    }
    return 0;
}
