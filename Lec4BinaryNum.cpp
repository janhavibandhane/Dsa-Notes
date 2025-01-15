#include <iostream>
using namespace std;

// DecimalToBinary
// int DecimalToBinary(int decNum){
//   int ans=0;
//   int pow=1; //10res0 10res1 10res2 and so onn ...
  
//   while(decNum>0){
//     int rem=decNum%2; //finding reminder
//     decNum=decNum/2;  //finding qoutiont
//     ans+=(rem*pow);   //rem*pow 1*10res0 0*10res1 and so on
//     pow=pow*10;       //incresing power of 10
//   }

//   return ans;

// }

// BinaryToDecimal 
// int BinaryToDecimal(int BinaryNum){
//     int ans=0;
//     int pow=1; //2res0 2res1 ans soo on
//     while(BinaryNum>0){
//        int rem=BinaryNum%10; //getting last number from user input
//        ans+=rem*pow;   //last num is 1 then 1*2res0
//        BinaryNum/=10;        //getting 2nd last num and so on
//        pow*=2;               //incressing power

//     }
//     return ans; 

// }

int main(){
    // cout<<DecimalToBinary(6);
    // cout<<BinaryToDecimal(101); //5
    return 0;
}