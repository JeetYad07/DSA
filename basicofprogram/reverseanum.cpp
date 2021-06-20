#include<iostream>
using namespace std;
int main(){

int n,r,m,rev=0;
m=n;
cout<<"Enter a number:"<<endl;
cin>>n;
while (n>0)
{
    r=n%10;
    n=n/10;
    rev=rev*10+r;
    
    }
cout<<"reverse of num is: "<<rev<<endl;





    return 0;
}