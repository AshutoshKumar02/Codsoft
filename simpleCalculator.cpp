/* Develop a calculator program that performs basic arithmetic operations such as addition, subtraction,
multiplication, and division. Allow the user to input two numbers and choose an operation to perform. */

#include <iostream>
using namespace std;

int main() {
    int arr[2];
    char ch;
    int inUse = 1;
    while(inUse){
        cout<<"Enter any two numbers: ";
        for(int i=0;i<2;i++){
            cin>>arr[i];
        }
        cout<<endl<<"Enter the operation(+,-,*,/) you want to perform: ";
        cin>>ch;
        switch(ch){
            case '+':
                cout<<endl<<"Addition of "<< arr[0] <<" and "<<arr[1] <<" is: "<<arr[0]+arr[1]<<endl;
                break;
            case '-':
                cout<<endl<<"Subtraction of "<< arr[0] <<" and "<<arr[1] <<" is: "<<arr[0]-arr[1]<<endl;
                break;
            case '*':
                cout<<endl<<"Multiplication of "<< arr[0] <<" and "<<arr[1] <<" is: "<<arr[0]*arr[1]<<endl;
                break;
            case '/':
                if(arr[1] == 0){
                    cout<<endl<<"division by zero error"<<endl;
                    break;
                }
                cout<<endl<<"Division of "<< arr[0] <<" and "<<arr[1] <<" is: "<<float(arr[0])/arr[1]<<endl;
                break;
            default:
                cout<<endl<<"Invalid Operator!"<<endl;
        }
        cout<<endl<<"Do u want to use the calculator?"<<endl<<"If yes then press '1' else press '0': ";
        cin>>inUse;
        cout<<endl;
    }    
}
