#include<iostream>
using namespace std;

int main(){
    int num1, num2, operation;
    // goto lable
    retryStart:

    cout<<"Calculator App \nEnter you Operation\n";
    cout<<"1.Add \n2.subtract \n3.Divide \n4.Multiply";
    cin>>operation;
    
    switch (operation)
    {
    case 1:
        cout<<"Enter Number to Add\n";
        cout<<"Number 1 :";
        cin>>num1;
        cout<<"Number 2 :";
        cin>>num2;
        cout<<"Result:"<<num1 + num2;
        break;
    case 2:
        cout<<"Enter Number to subtract\n";
        cout<<"Number 1 :";
        cin>>num1;
        cout<<"Number 2 :";
        cin>>num2;
        cout<<"Result:"<<num1 - num2;
        break;
    case 3:
        cout<<"Enter Number to Divide\n";
        cout<<"Number 1 :";
        cin>>num1;
        cout<<"Number 2 :";
        cin>>num2;
        cout<<"Result:"<<num1 / num2;
        break;
    case 4:
        cout<<"Enter Number to Multiply\n";
        cout<<"Number 1 :";
        cin>>num1;
        cout<<"Number 2 :";
        cin>>num2;
        cout<<"Result:"<<num1 * num2;
        break;
    default:
        cout<<"Wrong Option Try again..";
        goto retryStart;
        break;
    }
    

}