
#include<iostream>
using namespace std;
int main(){
    // float Electricity_bill,food,person,Home_Rent ;
    // cout<<"Enter the number of persons in the PG: "<<endl;
    // cin>>person;
    // cout<<"Enter the Electricity Bill :"<<endl;
    // cin>>Electricity_bill;
    // cout<<"Enter the Food Bill :"<<endl;
    // cin>>food;
    // cout<<"Enter the Home Rent :"<<endl;
    // cin>>Home_Rent ;
    // float Total=(Electricity_bill+food+Home_Rent)/person;
    // cout<<"Total Amount is :"<<Total<<endl;

    float num1 , num2 ;
    cout<<"Enter the First Number : "<<endl;
    cin>>num1;
    cout<<"Enter the Second Number : "<<endl;
    cin>>num2 ;
    if (num2 !=0)
    {
        cout<<"The Result of num1/num2 is :"<<num1/num2 <<endl;
    }
    else
    {
        cout<<"Divide by Zero is an Exceptional Case";
    }
    
    // if (num2 !=0)
    // {
    //     cout<<"The Result of num1 % num2 is :"<<num1%num2<<endl;
    // }
    // else
    // {
    //     cout<<"Modulus  by Zero is an Exceptional Case";
    // }

    
    return 0;
}