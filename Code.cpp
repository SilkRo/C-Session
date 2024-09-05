#include<iostream>
#include<math.h>
using namespace std;
int main(){
    // int  x, y, z, area1 , area2 , area3 , area4, area5;
    // cout<<"enter the Value of the x :";
    // cin>>x;
    // cout<<"Enter the value of the y :";
    // cin>>y;
    // cout<<"enter the Vlaue of the z : ";
    // cin>>z;
    // area1 = x+y+z;
    // cout<<"Addition is : "<<area1<<endl;
    // area2 = x-y-z;
    // cout<<"Subtraction is : "<<area2<<endl;
    // area3= x*y*z;
    // cout<<"Multiplication is : "<<area3<<endl;
    // area4=x/y/z;
    // cout<<"Division is : "<<area4<<endl;
    // area5=x%y%z;
    // cout<<"Modulus is : "<<area5<<endl;
    float num1,num2,Result;
    cout<<"Enter the first number : ";
    cin>>num1;
    cout<<"Enter the Second number : ";
    cin>>num2;
    Result= fmod(num1,num2);
    cout<<"Modulus:"<<num1<<"%"<<num2<<"="<<Result<<endl;
    return 0;
}   