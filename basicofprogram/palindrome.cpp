#include<iostream>
using namespace std;

int main(){
int n;
int rev=0;
int r;
int m=n;
cout<<"Enter a number:"<<endl;
cin>>n;
while (n>0)
{
    r=n%10;
    n=n/10;
    rev=rev*10+r;
}

if(rev==m){
    cout<<"palindrome"<<endl;
}else{
    cout<<"not a palindrome"<<endl;
}



    return 0;

}
