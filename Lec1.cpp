//; it is statement tarminator
// preprocessor directive
#include<iostream>
using namespace std;//(standard namespace)

int main(){
    // data types
    //PRIMITIVE DATA TYPES
    //1.int=complete +or- number (4 bytes (8bits=1byte)(bits means 010101 that all))
    //2.char=store single value(1 byte)
    //3.float=4 bytes
    //4.bool=1bytes
    //5.bouble=8bytes
    float PI=3.14f;
    double prices=100.99;

    //Type Convertion automatically
    char g='A';
    int val=g;
    cout<<val<<endl;
    // output 65 this is aski value of A

    // Typee casting
    double price=100.99;
    int newPrice=(int)price;
    cout<<newPrice<<endl;
    //output 100

    string name;
    cin>>name;

    // Unary Operators
    // Increment a++ = first kam karenge fir update ++a =1st update then kam
    int a=10;
    // int b= a++;
    int b= ++a;
    cout<< b <<endl;

    return 0;
}