#include<iostream>

using namespace std ;

int main(){

    int a =5 ;
    int b =7 ;

    cout<<"a&b = "<<(a&b)<<endl;
    cout<<"a|b = "<<(a|b)<<endl;
    cout<<"~a = "<<(~a)<<endl ;
    cout<<"a^b = "<<(a^b)<<endl;
    cout<<endl<<endl;

    cout<<"17 << 1 => "<<(17>>1)<<endl;
    cout<<"17 >> 2 => "<<(17>>2)<<endl;
    cout<<"19 << 1 => "<<(19<<1)<<endl;
    cout<<"21 << 2 => "<<(21<<2)<<endl;
    cout<<endl<<endl;

    int i=7;
    cout<<"++i => "<<(++i)<<endl;  //8
    cout<<"i++ => "<<(i++)<<endl;  //8 , i=9
    cout<<"i-- => "<<(i--)<<endl;  //9 , i=8
    cout<<"--i => "<<(--i)<<endl;  //7 , i=7
    
    // FOR LOOP

    // int n ;
    // cout<<"Enter the value of n :";
    // cin>>n;

    // for(int i=1; i<=n;i++){
    //     cout<<i<<endl;
    // }


    // int n ;

    // cout<<"Enter the value of n :";
    // cin>>n;

    // int i=1 ;

    // for(;;){
    //     if (i<=n){
    //         cout<<i<<endl;
    //     }
    //     else{
    //         break ;
    //     }
    //     i++;
    // }

    // More than one variable's :-

    // int n ;
    // cout<<"Enter the value of n :";
    // cin>>n;

    // for(int a=1 , b=2 , c=3 ;a<=n;a++,b--,c++){
    //     cout<<a<<" "<<b<<" "<<c<<endl;

    // }

    // Program for sum 1 to n :-

    // int n ;
    // cout<<"Enter the value of n :";
    // cin>>n;
    // int sum=0;
    // for(int i=1 ;i<=n;i++){

    //     sum=sum+i;
        
    // }
    // cout<<sum;

    //Fibonacci Series 

    // int n ;
    // cout<<"Enter the value of n :";
    // cin>>n;

    // int a=0,b=1;

    // cout<<a<<" "<<b<<" ";

    // for(int i=3;i<=n;i++){
    //     int l=a+b;
    //     cout<<l<<" ";
    //     a=b;
    //     b=l;
    // }


    // Prime Number :

    // int n ,isPrime=1;
    // cout<<"Enter a Number :";
    // cin>>n;

    // for(int i=2 ;i<n;i++){

    //     if(n%i==0){
    //         isPrime=0;
    //         break;
    //     }
    // }
    //
    // if(isPrime==1){
    //     cout<<"Prime Number "<<endl;

    // }
    // else {
    //     cout<<"Not Prime Number "<<endl;
    // }

    // CONTINUE 

    int n ;
    cout<<"Enter the value of n :";
    cin>>n;

    for(int i =1 ;i<=n ;i++){

        cout<<i<<endl;
        continue;
        cout<<i+1;
        
    }


}
