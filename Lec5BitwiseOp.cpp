#include <iostream>
using namespace std;

int main(){

    // int a=4, b=8;
    // cout<<(a&b)<<endl; //0
    // cout<<(a|b)<<endl; //12
    // cout<<(a^b)<<endl; //12     //XOR
    // cout<<(4<<1)<<endl; //output will be 8 because 4=100 and 8=1000
    // cout<<(10>>1)<<endl; // 10=1010 output 5=0101 last zero will be remove [0101]0

    // DATA TYPE MODIFYER
    // cout<<sizeof(int)<<endl; //4byte
    // cout<<sizeof(long int)<<endl; //4byte
    // cout<<sizeof(short int)<<endl; //2byte
    // cout<<sizeof(long long int)<<endl; //8byte

    // signed means store +ve AND -ve number
    // unsigned means store +ve num

    // unsigned int i=-10;
    // cout<<i<<endl; //4294967286

    // signed int j=-10;
    // cout<<j<<endl; //-10


    // HOMEWORK
    // Q1. WAF to reversw integer n
   int n=125;
    int r=0;
    while(n>0){
        int lastdigit=n%2;
        r = r*10+lastdigit;
        n=n/10;
    }
    cout<<r<<endl;

    
    
    
    return 0;
}