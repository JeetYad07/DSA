#include<iostream>
using namespace std;



int BaseToDecimal(int n, int b){
    int rev=0;
    int p=1;
    // int num=0;
while(n!=0){
    int r=n%10;
    rev+=r*p;
    
    p=p*b;
    // num+=rev;
    n=n/10;
   

}
return rev;

}

int DecimalToAnyBase(int n, int b){
    int rev=0;
    int p=1;
    
while(n!=0){
    int r=n%b;
    rev+=(r*p);
    p=p*10;
  
    n=n/b;
 }
   return rev;
}

// int BaseToDecimal(n,b1);

int main(){
int n,b1,b2;
cin>>n>>b1>>b2;
// int BaseToDecimal(n,b1);

int decimal_value=BaseToDecimal(n,b1);
int value= DecimalToAnyBase(decimal_value,b2);

cout<<value<<endl;


    return 0;
}

