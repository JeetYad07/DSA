#include<iostream>
using namespace std;

int main(){

int n,r,sum=0;
int m=n;
cout<<"enter a number:"<<endl;
cin>>n;

while (n>0)
{
    r=n%10;
    n=n/10;
   sum=sum+ r*r*r;
    
}
if(sum==m){
    cout<<"Armstrong no"<<endl;
}else{

    cout<<"Not a Armstrong"<<endl;
}




    return 0;
}