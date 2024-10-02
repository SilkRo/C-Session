#include<iostream>
using namespace std;
int main(){
    string a[]={"Apple" , "Banana" , "Pineapple" , "Watermelon" , "Mango" };
//    int size =sizeof(a) / sizeof(0);
//    cout<<"Elements of an Array : "<<endl;
//    for (int i = 0; i < size; i++)
//    {
//     cout<<a[i];
//     if (i<size -1 )
//     {
//         cout<<", ";
//     }
    
//    }
//    cout<<endl;

    a[0]="StarFruit";
    cout<<a[0];
    return 0;

}