#include<iostream>
using namespace std;

int getDigit(int n, int k){
    int count=0;
    while(n!=0){
    int r=n%10;
     if(r==k){
        count++;
     }
      n=n/10;   
}
    
    
    
    return count;
}

int main(){
int num;
int digit;
cout<<"Enter a numbers: "<<endl;
cin>>num;
cout<<"Enter the digit: "<<endl;
cin>>digit;

// int num1[]={0};

int freq=getDigit(num,digit);
cout<<freq<<endl;
    return 0;
}