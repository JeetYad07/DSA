#include<iostream>
using namespace std;
int main(){

string str="welcoMe";
for(int i=0;str[i]!='\0';i++){
    if(str[i]>=97 && str[i]<=122){
        str[i]=str[i]-32;   // for upt to lwr use str[]+32
    }
    
}
cout<<str<<endl;


// for string like str="WeLcOme"
string str1="WeLcOmE7";
for(int i=0;str1[i]!='\0';i++){
    if(str1[i]>=65 && str1[i]<=87){
        str1[i]=str1[i]+32;
    }
}
cout<<str1;

// iterative method
// string::iterator it;
// for(it=str.begin();it!=str.end();it++){
//     *it=*it-32;
//     cout<<*it;

// }


    return 0;
}