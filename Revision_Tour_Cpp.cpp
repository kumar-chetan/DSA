//  // C++ Developed BY Bjarne Stroustrup in 1979 

// /* 
// C++ :
// 1. Fast Program , more control over System Resources .
// 2. Memory Management .
// 3. High Performance .
// */

// // BASIC structure of a C++ Program :

// #include<iostream> //Header File (Basic Input / Output)

// using namespace std ; //standard

// int main(){
//     cout<<"Hello World";
//     return 0 ;
// }

// //Variables :- (Containers to store your data)

// int a=3 ;
// float b=3.2 ;

// /* COMMENTS :
// Single line comment : // comment
// Multiline Comment : /* comment */

// //Variables in C++ :-

// // A variable is a Container to hold data .

// //Variable type in C++ :


// // 1. INT :- (-2,-1,0,1,2,3)

// int sum=34 ; //means sum is an integer variable which hold value 34 in memory 

// /*
// 2. Float :-  (1.22,3.55,5.77)
// 3. Char :-   ('a','b','c')
// 4. Double :- (1.2345....)
// 5. Boolean :-(0 & 1 ; M & F)
// */

// /*
// => VARIABLE SCOPE :-

// Scope of a variable is the region in code where the existence of variable is valid .

// Based on scope we have & global variable in C++ :-

// local Variable :
// local variable are declared inside the braces of any fuction and can acessed only from there.

// Global Variable :
// Global Variable abre declared outside any fucntion and can be acessed from anywhere .

// ---> Can global and local Variable have same name in C++ : YES 

// => C++ Data Types :

// Data types define the type of data a variable can hold for 
// eg. an integer variable can hold integer data , a character type variable can hold character data etc. 

// DATA TYPE in C++ categorised in three groups :

// 1. Built - in 
// 2. User - Defined 
// 3. Derived 

// Buit in Data Types in C++ :-

// 1. int  2. Float  3. Char  4. Double  5.Bool

// USER - Defined Data Types :-

// 1. Struct  2.Union   3.Enum

// Derived Data Types :-

// 1. Array  2.Function   3. Pointer 

// */

// //INPUT / OUTPUT ::--

// // '<<' is called Insertion operator 
// // '>>' is called Extraction operator 

// /*
// TYPE CASTING :- 
// Convert one datatype into another .*/

// int a=45 ;
// float b=45.46 ;
// int c=int(b); //Convert Float b into int b 

// PROGRAM 

#include<iostream>

using namespace std ;

int main(){
    int age ;
    cout<<"Tell me your age :"<<endl;
    cin>>age;

    if (age<18){
        cout<<"You can not come to my Party"<<endl;
    }

    else if (age==18){
        cout<<"You will get a kid pass to the party"<<endl;
    }
    else{
        cout<<"You can come to the party "<<endl;

    }

    switch (age)
    {
    case 18 :
        cout<<"You are 18 "<<endl;
        break;
    case 22 :
        cout<<"You are 22"<<endl;
        break;

    default:
        cout<<"No special case"<<endl;
        break;
    }
}
