#include<iostream>
using namespace std;
int main (){
    int num1 ;
    cout<<"Enter the Value of num1 : "<<endl;
    cin>>num1;

    cout<<"The Value of the num1 is :"<<num1<<endl;
    

    num1 +=5;
    cout<<"The Value of the num1 += 5 is : "<<num1<<endl;
    
    num1 -=5;
    cout<<"The Value of the num1 -= 5 is : "<<num1<<endl;

    num1 *=5;
    cout<<"The Value of the num1 *=5 is :"<<num1<<endl;

    num1 /=5;
    cout<<"The Value of the num1 /=5 is : "<<num1<<endl;

    num1 %=5;
    cout<<"The Value of the num1 %=5 is :"<<num1<<endl;

    return 0;

}