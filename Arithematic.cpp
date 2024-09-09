// Arithematic Operator : 1) Addition : "+"
// 2) Subtraction : "-"
// 3)Multiplication : "*"
// 4) Divison : "/"
//5) Modulus : "%"
//6) Increment :"++"
//7) Decrement : "--"


#include<iostream>
using namespace std;
int main(){
    int num1 , num2 ;
    cout<<"Enter the First Number : "<<endl;
    cin>>num1;
    cout<<"ENTER THE Second Number : "<<endl;
    cin>>num2;
    cout<<"The Addition of the Number is : "<<num1 + num2<<endl;
    
    cout<<"The Substraction of the Number is : "<<num1 - num2<<endl;
    
    cout<<"The Multiplication of the Number is : "<<num1 * num2<<endl;
    
    if (num2 !=0)
    {
       cout<<"num1 / num2= "<<(num1/num2)<<endl; 
    }
    else{
       cout<<"Division by zero is an exception case "<<endl;
    }
    
    if (num2 !=0)
    {
        cout<<"num % num2= "<<num1%num2<<endl;
    }
    else
    {
        cout<<"Modulus by zero is an exception case "<<endl;
    }
    // Pre Incriment 
    cout<<"Value after pre increment is : "<< num1 << endl;
    cout<<"Value after the increment : "<<++num1<<endl;
    // Post Incriment 
    cout<<"Value after post increment is: "<<num1<<endl;
    cout<<"Value after the increment : "<<num1++<<endl;

    cout<<"Value after pre increment is : "<< num2 << endl;
    cout<<"Value after the increment : "<<++num2<<endl;

    cout<<"Value after post increment is: "<<num1<<endl;
    cout<<"Value after the increment : "<<num1++<<endl;

    cout << "Value after pre-decrement (--num1): " << --num1 << endl;

     cout << "Value after post-decrement (x--): " << num1-- << endl;
    cout << "Value of x after post-decrement: " << num1 << endl;

    cout << "Value after pre-decrement (--num2): " << --num2 << endl;

     cout << "Value after post-decrement (x--): " << num2-- << endl;
    cout << "Value of x after post-decrement: " << num2 << endl;

    return 0;
}

//num2 we use beacuse the number are directly divide by the num2 as an example : num1 = 5 and num2 = 55 and then the 5/55 
// 0.09090909090909091  so we use num2 to check the zero
// same for the modulus 
