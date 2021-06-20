#include<iostream>
#include<string>
using namespace std;
int main(){


// cout<<"Enter a string :"<<endl;
// cin>>str;
// // to access whole string including spaces
// // getline(cin,str);
// cout<<str<<endl;
// cout<<"Enter a string:"<<endl;
// cin>>str;
// cout<<str<<endl;
//basic function of a class

// to find the length and size we use stringname.length() and stringname.size()
// string str="";
// cout<<str.length()<<endl;
// cout<<str.size()<<endl;
// cout<<str.capacity()<<endl;
// to resize a string use str.resize(50)
// str.resize(50);
// str.clear(); for clearing the value of a string
// if(str.empty()){
//     cout<<"string is empty"<<endl;
// }
// else{cout<<str<<endl;
// }

// append() fun is use to add new content to string

// string s1="Programming";
// string s2="Language";
// string  s2="World";
// cout<<s1.capacity()<<endl;
// s1.append(" How are you all? Hope you are doing great");
// cout<<s1.capacity()<<endl;
// cout<<s1<<endl;

// to insert a string in a new string use str.insert(3,"Jee",2)

// s1.insert(3," are");
// to replace s.replace(3,4,"K")
// s1.replace(3,4,"K");
// s1.erase(3);
// it means remove letters of a srting that after a specific index no 
// s1.push_back('Z');//    to add a charcter from back

// s1.pop_back();
// string s1;
// cout<<"Enter string 1:"<<endl;
// getline(cin,s1);
// string s2;
// cout<<"Enter a string2: "<<endl;
// getline(cin,s2);
// s1.swap(s2);
// cout<<s1<<endl;
// cout<<s2<<endl;


// to copy a string

// string s="Programming";
// char str[20];
// s.copy(str,3); // after mentioning the number for which you want to copy must put null to terminate the char array
// str[3]='\0';

// cout<<str<<endl;
// cout<<s.find('g')<<endl; // this will give the occurance of a letter by index no
// cout<<s.rfind('m')<<endl;
// cout<<s.find_first_of('r',2)<<endl;
// cout<<s.substr(4,3)<<endl;
// cout<<s.compare("P")<<endl;

string str="Humanity";
// cout<<str.at(5)<<endl;
// cout<<str.front()<<endl;
// cout<<str.back()<<endl;
// cout<<str[1]<<endl;
// str=str+" is alive";
// cout<<str<<endl;

    return 0;
}