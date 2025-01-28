#include <iostream>
using namespace std;
int main()
{
    // Q1
    // int n;
    // cout<<"Eneter value of n"<<endl;
    // cin>>n;
    // for( int j=1;j<=n;j++){
    //     cout<<endl;
    //     for(int i=1;i<=n;i++){
    //     cout<<"* ";
    // }
    // }
    // OUTPUT:-
    // * * * * *
    // * * * * *
    // * * * * *
    // * * * * *
    // * * * * *

    // Q2
    // int n;
    // cout << "Eneter value of n" << endl;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // { // outer loop
    //     char ch = 'A';
    //     for (int j = 0; j < n; j++)
    //     { // inner loop
    //         cout << ch;
    //         ch = ch + 1;
    //     }
    //     cout << endl;
    // }
    // OUTPUT:-
    // Eneter value of n
    // 5
    // ABCDE
    // ABCDE
    // ABCDE
    // ABCDE
    // ABCDE

    //  Q3
    // int n=3;
    // int num=1;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++)
    //     {
    //       cout<<num;
    //       num++;
    //     }
    //     cout<<endl;

    // }
    // OUTPUT:-
    // 123
    // 456
    // 789

    //  Q3
    // int n=3;
    // char ch='A';
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<ch;
    //         ch++;
    //         // ch=ch+1
    //     }
    //     cout<<endl;
    // }

    // OutPut:-
    // ABC
    // DEF
    // GHI

    // Q4
    // int n=3;
    // for(int i=0;i<n;i++){
    //    for(int j=0; j<i+1;j++){
    //     cout<<"*";
    //    }
    //    cout<<endl;
    // }

    // OUTPUT:-
    //     *
    // **
    // ***

    // Q5
    // int n=4;
    // for(int i=0;i<n;i++){
    //    for(int j=0;j<i+1;j++){
    //     cout<<i+1;
    //    }
    //    cout<<endl;
    // }
    // OUTPUT:-
    // 1
    // 22
    // 333
    // 4444

    //  Q.6
    //     int n = 4; // Number of rows to print
    //     char ch = 'A'; // Starting character is 'A'

    // for (int i = 0; i < n; i++) { // Outer loop iterates over rows
    //     for (int j = 0; j < i + 1; j++) { // Inner loop iterates for characters in the row
    //         cout << ch; // Print the current character
    //         ch++;       // Move to the next character in the ASCII sequence
    //     }
    //     cout << endl; // Move to the next line after finishing the row
    // }

    // OUTPUT:-
    // A
    // BC
    // DEF
    // GHIJ

    // Q7
    // int n=4;
    // for(int i=0;i<n;i++){
    //     for(int j=1; j<=i+1;j++){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }
    // 1
    // 12
    // 123
    // 1234

    // Q8
    // int n=4;
    // for(int i=0;i<n;i++){
    //     for(int j=i+1; j>0;j--){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }
    // 1
    // 21
    // 321
    // 4321

    

    // Q9
    // int n=4;
    // int num=1;
    // for(int i=0;i<n;i++){
    //     for(int j=0; j<i+1;j++){
    //         cout<<num<<" ";
    //         num++;

    //     }
    //     cout<<endl;
    // }
    // OUTPUT:-
    // 1
    // 2 3
    // 4 5 6
    // 7 8 9 10

    // 10



    return 0;
}