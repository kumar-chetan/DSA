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


}