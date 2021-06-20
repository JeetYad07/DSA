#include<iostream>
using namespace std;
int main(){

int num;
cout<<"Enter a number"<<endl;
cin>>num;
if(num>0){
    cout<<"num is positive:"<<num;
}
else if(num<0){
    cout<<"num is negative:"<<num<<endl;
}
else
  {
      cout<<"num is zero:"<<num<<endl;
  }



    return 0;
}