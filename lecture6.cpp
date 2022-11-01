#include<iostream>
#include<math.h>
using namespace std ;

int main (){

    //Decimal to Binary ::
    // int n,i=1,ans=0;

    // cout<<"Enter No. :";
    // cin>>n;

    // while (n!=0){

    //     int bit = n&1 ;
        
    //     ans=(bit*pow(10,i)) + ans;

    //     n=n>>1;
    //     i=i+1;
    // }
    // cout<<"Answer is :"<<ans<<endl;

    //Binary to Decimal ::

    int n;
    cout<<"Enter a Binary No. :";
    cin>>n;//1010
    int ans=0,i=0 ;

    while (n!=0){

        int digit=n%10;

        if(digit==1){
            ans=ans+pow(2,i);
        }
        n=n/10;
        i++;
    }
    cout<<ans<<endl;

}
