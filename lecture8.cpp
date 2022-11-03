//Lecture 8 :-
#include<iostream>

using namespace std ;


int main(){

    // int num=10 ;

    // switch(num){

    //     case 1 :
    //         cout<<'ONE';
    //         break;
    //     case 5 :
    //         cout<<'FIVE';
    //         break;
    //     case 10 :
    //         cout<<'TEN';
    //         break;
        
    //     default :
    //         cout<<'NOTHING';

    // }


    //CALCULATOR ::

    int a , b ;
    cout<<"Enter the value of a :"<<endl;
    cin>>a;

    cout<<"Enter the value of b :"<<endl;
    cin>>b;

    char op ;
    cout<<"Enter the Operation you want to Perform :"<<endl;
    cin>>op;

    switch (op)
    {
    case '+' :

        cout<<(a+b)<<endl;
        break;
    case '-':
        cout<<(a-b)<<endl;
        break;
    case '*':
        cout<<(a*b)<<endl;
        break;
    case '/':
        cout<<(a/b)<<endl;
        break;
    case '%':
        cout<<(a%b)<<endl;
        break;
    default:
        cout<<"Please Enter a valid Operator :"<<endl;
        break;
    }
    
}
