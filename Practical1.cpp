#include<iostream>
using namespace std;
int main()
{
    int numbers[10];
    cout<<"Enter the 10 Numbers : "<<endl;
    for (int i = 0; i <10; i++)
    {
        cout<<"Number"<<(i+1)<<":";
        cin>>numbers[i];
    }
    cout<<"you entered :";
    for (int i = 0; i <10; i++)
    {
        cout<<numbers[i]<<" ";
    }
    cout<<endl;
    return 0;
}