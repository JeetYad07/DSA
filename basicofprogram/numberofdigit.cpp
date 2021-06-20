#include<iostream>
#include<cmath>
using namespace std;


// take number as 754           to do so we have to divide the num with 10^(numofdigit-1);
//  we have to print like 7     to find number of digit we have to count the digits in a number  rem=n%10; digit++;
//                        5
//                        4
int main(){
int n;
cout<<"enter a number to print: "<<endl;
cin>>n;
int temp=n;
int no_digit=0;
while(temp!=0){ // check untill the number become zero
int temp=temp/10;
no_digit++;
}

int divisor=pow(10,no_digit-1);
while(divisor!=0){ 
//     // here is a twist if we takwe n!=0 for some cases it failed like: 7500/100 and 500/10, 0
// so that we have to choose divisor !=0
int div=n/divisor;
cout<<div<<endl;
n=n%divisor;
divisor=divisor/10;



}





    return 0;
}