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

void print7(int n){
    for(int i=0;i<n;i++){
        // space
        for(int j=0;j<n-i-1;j++){ //n=4 and i=0 (then it will print 3 space)
           cout<<" ";
        }
        // star
        for(int j=0;j<2*i+1;j++){ //n=4 and i=0 (2*0+1= it will print one star)
            cout<<"*";
        }
        // space
        for(int j=0;j<n-i-1;j++){ //n=4 and i=0 (then it will print 3 space)
            cout<<" ";
        }
        cout<<endl;
    }
}

void print8(int n){
    for(int i=0;i<n;i++){
        // space
        for(int j=0;j<i;j++){ //initaly it print 0 space then 1 2 3 4 and so on
           cout<<" ";
        }
        // star
        for(int j=0;j< 2*n-(2*i+1);j++){ //n=4 and i=0 2*4-(2*0+1)=9 then it will print 9 star
          cout<<"*";
        }
        // space
        for(int j=0;j<i;j++){ //initaly it print 0 space then 1 2 3 4 and so on
            cout<<" ";
        }
        cout<<endl;
    }
}

void print10(int n){
    for(int i=1;i<=2*n-1;i++){  //loop will run if n=5 then 9 times 2*5-1=9
        int stars=i;
        if(i>n) stars=2*n-i; //if i=6 then stars=10-6=4 4stars will print
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void print11(int n){
    for(int i=0;i<n;i++){
        int start=1;
        if(i%2==0) start=1;
        else start=0;
        for(int j=0;j<=i;j++){
            cout<<start;
            start=1-start; //for flipping number 0 to 1 and 1 to 0
        }
        cout<<endl;
    }
}

void print12(int n){
    int space=2*(n-1);
    for(int i=1;i<=n;i++){
        // number
        for(int j=1;j<=i;j++){ //this loop will run from 0 to i (for ex i=3 then *** will print)
            cout<<j;
        }
        // space
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        //number
        for(int j=i;j>=1;j--){ //this loop will run from 0 to i (for ex i=3 then *** will print)
            cout<<j;
        }
        cout<<endl;
        space-=2;
    }
}

void print13(int n){
    int num=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<num<<" ";
            num+=1;
        }
        cout<<endl;
    }
}

void print14(int n){
  
  for(int i=0;i<n;i++){
    for(char ch='A';ch<='A'+i;ch++){
        cout<<ch<<" ";   
    }
    
    cout<<endl;
  }
}

void print15(int n){
  
  for(int i=0;i<n;i++){
     for(char ch='A';ch<='A'+(n-i-1);ch++){
        cout<<ch<<" ";   
    }
    
    cout<<endl;
  }
}

void print16(int n){
    char letter='A';
    for(int i=0;i<n;i++){
        for(int j=0; j<=i;j++){
            cout<<letter<<" ";
        }
        letter+=1;
        cout<<endl;
    }
}
int main(){
     int n;
     cin>>n;
    // print1(n); 
    // print2(n);
    // print3(n);
    // print7(n);
    print16(n);
     return 0;
}