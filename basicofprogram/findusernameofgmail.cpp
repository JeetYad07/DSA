#include<iostream>
using namespace std;
int main(){
    // we have to find user name ,
 string str="imjeet227@gmail.com";
//  int n=str.find('@');
 cout<<str.substr(0,str.find('@'))<<endl;
 // here if we use str.begin() or first index of str in place of 0 it will give type size exceeds











    return 0;
}