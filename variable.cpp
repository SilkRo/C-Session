// int => store integers (whole numbers),without decimals such as 123 or -123 
// double => stores floating point numbers , with decimals such as 19.99 or -19.99
// char => store single charecter value such as 'a'& 'B'
// string => stores text , such as "Hello World !" . Strings are surronded by the DoubleQoutes (" ")
// bool => stores the values with two states : true or false 

/*Types of the Variables : 
1) int myNum =15;
2) double myFloatNum = 5.99;
3) char myLetter = 'D';
4) string myText="Hello Adi ";
5)bool myBoolean = true;
*/

/*There are Basic 3 Integer Type : 
1)short => Typically 16 bits
2) int => Typically 32 bits 
3) long => Typically 64 bits
*/

// synatx : type variableName = value;



#include<iostream>
using namespace std;
int main(){
    int myNum = 15;
   cout<<myNum<<endl;

   int myNumber;
   myNumber=47;
   cout<<myNumber<<endl;


   short sa=55;
   short Sa=55;
   int b=66;
   long c=44;


   cout<<sa << endl;
   cout<<Sa<<endl;
   cout<<b<<endl;
   cout<<c<<endl;

   double myFlotatNum=5.99;
   cout<<myFlotatNum<<endl;

   char myLetter = 'D';
   cout<<myLetter<<endl;

   string myText="Hello Adi ";
   cout<<myText<<endl;

   bool myBoolean = true;
   cout<<myBoolean<<endl;

//  Display Variable 
    int myAge = 19;
    cout << "I am " << myAge << " years old."<< endl;

    return 0;
}


