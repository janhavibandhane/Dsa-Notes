#include <iostream>
using namespace std;

int linearSearch(int arr[],int sz, int target){
    for(int i=0;i<sz;i++){
        if(arr[i]==target){
            return i; //return index
        }
    }
    return -1;
}

int ReverseArray(int arr[],int sz){
    int start=0; int end=sz-1;
    while (start<sz)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    
}

int ProductAndSum(int arr[],int sz){
    int product=1;
     for(int i=0;i<sz;i++){
        product=product*arr[i];
    }
    return product;
}

int MinandMaxSwap(int arr[],int sz){
    
}

int main(){
    // int marks[50]={90,100,54,36,100}; 
    // double price[]={98.99,05.67,30.00};

    // marks[0]=101;
    // cout<<marks[0]<<endl;
    // cout<<marks[-1]<<endl; //garbeg value
    // int size=5;

    // for(int i=0;i<size;i++){
    //     cout<<marks[i]<<endl;
    // }


    // take input and print
    // int size=5;
    // int marks[5];
    // for(int i=0;i<size;i++){
    //     cin>>marks[i];
    // }

    // for(int i=0;i<size;i++){
    //     cout<<"Array is:-"<<marks[i]<<endl;
    // }



    // Q1   find smallest number
    // int smallest=INT8_MAX; //+infine
    // int num[]={5,15,22,1,-15,24};
    // int size=6;
    // for(int i=0;i<size;i++){
    //     // if(num[i]<smallest){
    //     //    smallest=num[i];
    //     // }
    //     smallest=min(num[i],smallest);
    // }
    // cout<<"Sallest ="<<smallest<<endl; //-15

    // Q2   find Largest number
    // int largest=INT8_MIN; //+infine
    // int num[]={5,15,22,1,-15,24};
    // int size=6;
    // for(int i=0;i<size;i++){
    //     // if(num[i]>largest){
    //     //    largest=num[i];
    //     // }
    //     largest=max(num[i],largest);
        
    // }
    // cout<<"largest ="<<largest<<endl; //24


    // Q3 print index of smallest value
    // int smallest=INT8_MAX; 
    // int num[]={5,15,22,1,-15,24};
    // int size=6;
    // int smallestIndex;
    // for(int i=0;i<size;i++){
    //     smallest=min(num[i],smallest);
    //     smallestIndex=i;
    // }
    // cout << "Smallest value is: " << smallest << endl;
    // cout << "Index of smallest value is: " << smallestIndex << endl;
   
    //PASS BY REFERENCE
    // means changing in originl thing

    //1.LINEAR SEARCH
       int arr[]={4,2,7,8,1,2,5};
       int sz=7;
       int target=8;

    //cout<<linearSearch(arr,sz,target)<<endl; //3
   
    //2.REVERSE AN ARRAY
     ReverseArray(arr,sz);
     for(int i=0;i<sz;i++){
        cout<<arr[i]<<" ";
     }
     cout<<endl; //4 2 7 8 1 2 5

    //3.CALCULATE SUM AND PRODUCT OF ALL NUMBER IN Array
    cout<<ProductAndSum(arr,sz)<<endl;//4480

    // 4.Swap the max and min number of an array
    

    return 0;


}