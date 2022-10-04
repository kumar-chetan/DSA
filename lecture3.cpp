
#include<iostream>

using namespace std ;

int main(){

    // int a ;
    // cout<<"Enter a number :";
    // cin>>a;
    // cout<<"Your Number is :"<<a;

    // int a,b ;
    // cout<<"Enter value of a and b :";
    // cin>>a>>b; 
    // cout<<"value of a is :"<<a<<"\nvalue of b is :"<<b ;


    // int x ;
    // x=cin.get(); //for reading whitespaces
    // cout<<x;

    // int a ,b ;
    // cout<<"Enter the Value of a :" ;
    // cin>>a;
    // cout<<"Enter the Value of b :";
    // cin>>b;
    // if (a>b){
    //     cout<<"A is Greater ";

    // }
    // else{
    //     cout<<"B is Greater ";
    // }

    // int a=2 ;
    // int b=a+1;
    
    // if ((a=3)==b){
    //     cout<<a;
    // }
    // else{
    //     cout<<a+3;
    // }

    // int a ;
    // cout<<"Enter a Number :";
    // cin>>a;

    // if (a>0){
    //     cout<<"Number is Positive ";

    // }
    // else if( a<0 ) {
    //     cout<<"Number is Negative ";

    // }
    // else {
    //     cout<<"Number is Zero ";
    // }

    // Home Work 

    // char a ;
    // cout<<"Enter a value :";
    // cin>>a;

    // if ('a'<= a &&a <='z'){
    //     cout<<"You Enter a lowercase letter ";
    // }

    // else if('A'<=a && a<='Z'){
    //     cout<<"You Enter a uppercase letter ";
    // }
    // else if('0'<=a && a<='9'){
    //     cout<<"You Enter a Number ";
    // }
    // WHILE LOOP

    //For Counting
    // int n ;
    // int i=1 ;
    // cout<<"Enter the value of n :";
    // cin>>n;

    // while (i<=n)
    // {
    //     cout<<i<<" ";
    //     i=i+1;
    // }

    // int n ;
    // cout<<"Enter the value of n :";
    // cin>>n;

    // int sum=0;
    // int i = 1 ;

    // while(i<=n){

    //     sum=sum+i;
    //     i=i+1;
    // }
    // cout<<"The SUM is "<<sum;

    // HOME WORK (sum of even numbers )

    // int n ;
    // cout<<"Enter a number :";
    // cin>>n;
    
    // int sum=0;
    // int i=2 ;
    // while(i<=n){

    //     sum=sum+i ;
    //     i= i+2;
    // }
    // cout<<sum;

    // // second method
    // int n ;
    // cout<<"Enter a number :";
    // cin>>n;
    
    // int sum=0;
    
    // int i=2 ;

    // while(i<=n){
        
    //     if(i%2==0){
    //         sum=sum+i ;
    //     }
    //     i= i+1;
    // }

    // cout<<sum;

    // Fahrenheit to Celsius :-

    // C=(5/9){F-32}

    // float f ;
    // cout<<"Enter Temperatue in in Fahrenheit :";
    // cin>>f;
    // float c=(5.0/9)*(f-32) ;
    // // c=(5/9)*(f-32) ;
    // cout<<"Temperature in Celsius is :"<<c;

    //baad m dekh te H ese
    // int n ;
    // cout<<"Enter a Number :";
    // cin>>n;
    // int i=2;

    // while(i<n){
    //     if (n%i==0){
    //         cout<<"Not Prime ";

    //     }
    // }

    //Pattern 1
    // int n ;
    // cout<<"Enter number :";
    // cin>>n;
    // int i=1 ;

    // while(i<=n){
    //     int j=1 ;

    //     while(j<=n){
    //         cout<<"x ";
    //         j=j+1;
    //     }
    //     cout<<endl;
    //     i=i+1 ;
    // }

    // Pattern 2

    int n ;
    cout<<"Enter value of n :";
    cin>>n;
    int i=1 ;
    while(i<=n){
        int j=1 ;
        while(j<=n){
            cout<<i<<" ";
            j=j+1;

        }
        cout<<endl;

        i=i+1 ;
    }

}   
