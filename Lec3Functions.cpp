#include <iostream>
using namespace std;

// Functions are stored in stack in the form of stack frame 
// we use void when we want to print value not return any type of val
// void printHello(){
//     cout<<"hello\n";
// }

// int printHello()
// {
//     cout << "hello\n";
//     return 3;
// }

// int sum(int a,int b){
//     int s=a+b;
//     return s;
// }

// int minOfTwo(int a,int b){
//     if(a < b){
//         return a;
//     }else{
//         return b;
//     }
// }
   
//    int sumN(int n){
//     int sum=0;
//     for(int i=1;i<=n;i++){
//         sum+=i;
//     }
//     return sum;
//    }

// int factorial(int n){
//     int fact=1;
//     for(int i=1; i<=n;i++){
//         fact*=i;
//         // fact=fact*i;
//     }
//     return fact;
// }

// PASS BY Value
// int sum(int a,int b){
//     int s=a+b;
//     return s;
// }

//Q1 ADDING DIGITS 
// int sumOfDigits(int num){
//     int digitSum=0;

//     while(num>0){
//         int lastDig=num%10;   // Extract the last digit of num
//         num/=10;              // Remove the last digit from num

//         digitSum+=lastDig;    // Add the extracted digit to digitSum
//     }
//     return digitSum;
// }

//Q2 SOLVING NCR QUESTION
//  int factorial(int n){
//     int fact=1;
//     for(int i=1;i<=n;i++){
//         fact*=i;
//     }
//     return fact;
//  }

//  int nCr(int n,int r){
//     int fact_n=factorial(n);
//     int fact_r=factorial(r);
//     int fact_nmr=factorial(n-r);

//     return fact_n / (fact_r * fact_nmr); //formula
//  }

// Q.3 check num is prime or not
// int PrimeOrNot(int n){
//     if(n%2==0){
//        cout<<"Num is not Prime";
//     }
//     else{
//         cout<<"num is prime";
//     }
// }

// Q4 print series of prime num
int PrintPrimeNum(int n){
    for(int i=1;i<=n;i++){
        if(i%2==0){
           
        }else{
             cout<<i;
        }

    }
}


int main()
{
    // cout<<"sum="<<sumOfDigits(2345)<<endl; //14
    // function call
    //    printHello();

    // cout << printHello() << endl;

    // cout<<sum(2,4)<<endl; //6

    // cout<<"min="<<minOfTwo(2,4)<<endl; //2

    // cout<<sumN(2)<<endl; //3

    // cout <<factorial(3)<<endl; //6

    // PASS BY Value
    // int x=3; int y=4;
    // cout<<sum(x,y)<<endl;
    // return 0;

    // SOLVING NCR QUESTION
    // int n=6 , r=2;
    // cout<<nCr(n,r)<<endl; //15

    //  PrimeOrNot(5);
    PrintPrimeNum(10);

}