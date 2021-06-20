#include <iostream>
using namespace std;

int main(int argc, char **argv)
{ 
 
 // concept of fib is: adding of past to our life
//  F(0)=0,F(1) and F(n)=F(n-1)+F(n-2)  condition n>1

    int n;
     cout<<"Enter a number: "<<endl;
    cin >> n;
   
    int a=0,b=1; 
    // we have to first print first two numbers...
    std::cout<<"Fibonacci series are: "<<endl;
    std::cout<<a<<endl<<b<<endl;
    for(int i=0;i<n;i++){
        int c=a+b;
       std:: cout<<c<<endl;
        a=b;
        b=c;
    }
    
    
    //write your code here
    return 0;
}