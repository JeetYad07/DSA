#include<iostream>
using namespace std;

int main(){

int n,fact=1,i=1;
cout<<"Enter a number: "<<endl;
cin>>n;
while (i<=n)
{
   fact*=i;
   i++;
}
cout<<"factorial of "<<n<<" is : "<<fact<<endl;



    return 0;
}