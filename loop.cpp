// loop :
// 1) if else   

// Problem Statement : Calculate The Age to Verify That you are Eligible for voting or not 
// #include<iostream>
// using namespace std;
// int main(){
//     int Age;
//     cout<<"Enter Your Age :"<<endl;
//     cin>>Age;
//     if (Age>=18)
//     {
//         cout<<"You are Eligible for Voting"<<endl;
//     }
//     else
//     {
//         cout<<"You are Not Eligible for Voting "<<endl;
//     }
    
//     return 0;
// }


// Verify the Number is Even or Odd 

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a Number :"<<endl;
//     cin>>n;
//     if (n%2==0)
//     {
//         cout<<"Number is Even"<<endl;
//     }
//     else{
//         cout<<"Number is Odd"<<endl;
//     }
    
//     return 0;
// }


// Calculate the Grade 

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter Your Marks :"<<endl;
//     cin>>n;
//    if (n>=90 && n<=100)
//    {
//     cout<<"Grade A"<<endl;
//    }
//    else if (n>=80 && n<=90)
//    {
//     cout<<"Grade B"<<endl;
//    }
//    else if (n>=70 && n<=80)
//    {
//     cout<<"Grade C"<<endl;
//    }
//    else if (n>=60 && n<=70)
//    {
//     cout<<"Grade D"<<endl;
//    }
//    else
//    {
//     cout<<"Grade F"<<endl;
//     cout<<"You are Fail"<<endl;
//    }
//     return 0;
// }



// ASCII Value : American Standard Code for Information Interchange 
// Find the ASCII Value for the Char

// #include<iostream>
// using namespace std;
// int main(){
//     char c;
//     cout<<"Enter a Character :"<<endl;
//     cin>>c;
//     cout<<"ASCII Value of "<<c<<" is "<<int(c)<<endl;
//     return 0;
// }
// A=65 and Z=90   a=97 and z=122



// Find the Char is Lowercase or Uppercase 

// #include<iostream>
// using namespace std;
// int main(){
//     char c;
//     cout<<"Enter a Character :"<<endl;
//     cin>>c;
//     if (c>=97 && c<=122)
//     {
//         cout<<"The Char is LowerCase :"<<endl;
//     }
//     else{
//         cout<<"The Char is UpperCase :"<<endl;
//     }
//     return 0;
// }


// Ternary :
// Syntax: condition?statement1 : statement2

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter Your Attendance :"<<endl;
//     cin>>n;
//     cout<<"Your Attendance is "<<(n>=75?"Good":"Bad")<<endl;
//     return 0;
// }


// While :

// #include<iostream>
// using namespace std;
// int main(){
//     int one=1;
//     while (one<=5 )
//     {
//         cout<<one<<" \n";
//         one++;
//     }
    
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int num , i = 2;
//     bool isPrime = true;
//     cout<<"Enter the Integer :"<<endl;
//     cin>>num;
//     if (num <= 1 )
//     {
//         isPrime = false;
//     }else
//     {
//         while (i<= num/2)
//         {
//             if (num%  i ==0)
//             {
//                 isPrime=false;
//                 break;
//             }
//             ++i;
//         }
//     }
//     if (isPrime)
//     {
//         cout<<num<<"Is a Prime Number : "<<endl;

//     }
//     else{
//         cout<<num<<"Is Not a Prime Number : "<<endl;
//     }
    
//     return 0;
// }


//  For loop :

/*
syntax : 
for(Initialize ; Condition ; Update){
            Code 
}
int a=12;
n<=12
n++/n-- 
3! = 3*2*1
*/


#include<iostream>
using namespace std;
int main(){
    int num;
    int factorial = 1;
    cout<<"Enter the Integer :"<<endl;
    cin>>num;
    for(int i=1 ;i<=num ;i++){
        factorial*=i;
    }
    cout<<"Factorial of "<<num<<" is "<<factorial<<endl;
    return 0;
}

