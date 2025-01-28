#include<iostream>
using namespace std;

void print1(int n){
    for(int i=0;i<n;i++){  
        for(int j=0;j<n;j++){ //this loop will run countiously 4 time like **** and then it will end
            cout<<"* ";
        }
        cout<<endl;
     }
}

void print2(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){ //this loop will run from 0 to i (for ex i=3 then *** will print)
            cout<<"* ";
        }
        cout<<endl;
    }
}

void print3(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){ //this loop will run from 1 to i (for ex i=3 then 123 will print)
            cout<<j;
        }
        cout<<endl;
    }
}

void print4(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){ //this loop will run from 1 to i (for ex i=3 then it will run 3 times )
            cout<<i;   //here we are printing i then if i=3 it will print 333
        }
        cout<<endl;
    }
}

void print5(int n){
    for(int i=1;i<=n;i++){
        for(int j=0;j<n-i+1;j++){ // if n=4 and i=2  then j=n-i+1 it means j=4-3+1 j=2(then two star will print) similaly// if n=4 and i=4  then j=n-i+1 it means j=4-4+1 j=1(then only one star will print)
            cout<<"* ";
        }
        cout<<endl;
    }
}

void print6(int n){
    for(int i=0;i<n;i++){
        for(int j=1;j<n-i+1;j++){
            cout<<j;
        }
        cout<<endl;
    }
}




int main(){
     int n;
     cin>>n;
    // print1(n); 
    // print2(n);
    // print3(n);
    print6(n);
     return 0;
}