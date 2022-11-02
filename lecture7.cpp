//Lecture 7: LeetCode Problem Solving Session
// LeetCode Problem Solving Session



#include<iostream>
#include<math.h>

using namespace std ;

int main(){

    // Reverse Integer
    // int n,ans=0 ;
    // cout<<"Enter a Number :";
    // cin>>n;

    // while (n!=0){

    //     int digit=n%10;

    //     if((ans > INT_MAX/10) || (ans<INT_MIN/10)){
    //         return 0 ;
    //     }

    //     ans=(ans*10)+digit;

    //     n=n/10 ;


    // }

    // cout<<"Reverse is :"<<ans<<endl;    



    //Complement of Base 10 Integer
    int n ;
    cout<<"Enter a Number :";
    cin>>n;
    int m=n ;
    int mask = 0 ;
    
    //Corner Case 
    if(n==0){
        return 1 ;
    }
    
    while (m!=0){
        mask = (mask<<1) | 1 ;
        m = m >> 1 ;
    }
    
    int ans = (~n) & mask ;

    cout<<ans<<endl ;

}
