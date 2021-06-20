#include<iostream>
using namespace std;
int main(){
int m,n;
cout<<"Enter value of m,n:"<<endl;
cin>>m>>n;
while (m%n!=0)
{
   int rem=m/n;
   n=rem;
   m=n;
    // if(m>n){
    //     m=m-n;
    // }
    // else if(n>m){
    //     n=n-m;
    // }
}
int gcd=n;
cout<<"GCD is : "<<gcd;







    return 0;

}