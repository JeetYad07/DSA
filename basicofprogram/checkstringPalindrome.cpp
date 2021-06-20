#include<iostream>
using namespace std;
int main(){

string str="madaM";
string rev;

int len=str.length();
rev.resize(len);

for(int i=0, j=len-1;i<len;i++,j--){
//  if(str[i]>=65 && str[i]<=90){
//      str[i]+=32;
//  }
 
 rev[i]=str[j]; // "madaM"
 if(rev[i]=='m'){
     rev[i]-=32;
 }else if(rev[i]=='M'){
   rev[i]+=32;
 }

}
rev[len]='\0';
if(str.compare(rev)==0){
    cout<<"palindrome"<<endl;
}else{
    cout<<"not palindrome"<<endl;
}
// cout<<rev<<endl;

// string str;
// cout<<"Enter a string: "<<endl;
// cin>>str;
// string rev;
// // first we have to find length of a string
// int len=str.length();

// rev.resize(len);
// for(int i=0,j=len-1;i<len;i++,j--){
//     rev[i]=str[j];
// }
// rev[len]='\0';

// if(str.compare(rev)==0){
//     cout<<"string is palindrome"<<endl;
// }else{
//     cout<<"string is not a palindrome"<<endl;
// }

// cout<<rev<<endl;



    return 0;
}