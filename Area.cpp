#include<iostream>
using namespace std;
int main(){
    float celsius , fahrenheit ;
    cout<<"Enter the Temperature of Celsius : ";
    cin>>celsius ;
    fahrenheit = (celsius*9)/5+32;
    cout<<"Temperature of Fahrenheit is "<<fahrenheit<<endl ;
    return 0 ;
}