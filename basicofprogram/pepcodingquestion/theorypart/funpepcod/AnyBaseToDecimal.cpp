#include<iostream>
using namespace std;

int getDecimalfromanyBase(int n,int base){
   
   int rev=0;
   int num=0;
   int p=1;
    while(n!=0){
     int r=n%10;
     rev=r*p;
     p=p*base;
     num+=rev;
     n=n/10;
    }
return num;


}


int main(){
int n;
cout<<"Enter a number: "<<endl;
cin>>n;
int base;
cout<<"Enter a base: "<<endl;
cin>>base;
int z=getDecimalfromanyBase(n,base);
cout<<z<<endl;

    return 0;
}