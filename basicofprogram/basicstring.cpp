#include<iostream>
using namespace std;
int main(){
// to define  string we can use char of array
// char s[10]={"Hello"};
// here i have mentioned the size of an char array
// char s[]{"Hello"};
// with initally mentioning the size
// char s[10]={'H','e','l','l','o','\0'};
// '\0' is a terminating string,null character,string delimiter
// we can also access the character by using ASCii values
// char s[10]{65,66,67,68,'\0'};
// we can aslo access char of string by using pointer to a char array

// char *s={"Hello"};
// to input from user

// to access name from user through keyboard

char s[100];
cout<<"Enter your name: "<<endl;
// cin>>s;
// here what happening is ,it only printing first word of our name

// to access whole name
// cin.get(s,20);
// we can also use getline also
// // cin.getline(s,100);
// cout<<"Welcome "<<s<<endl;

 // It is showing a problem that after execting first line of code it get into second line and then exit.to solve that problem introduce ignore fun
// cin.ignore();

// char s2[100];
// cout<<"Enter your name again: "<<endl;
// cin.get(s2,100);

// cout<<"Welcome back "<<s2<<endl;







    return 0;
}