#include<iostream>
#include<string>
using namespace std;
int main(){

string str="Jeet Yadav";
string::iterator it;


int count=0;

for (it=str.begin();it!=str.end();it++)
{
//    cout<<str[i]<<endl;
   count++;
}


cout<<"Length is : "<<count<<endl;


    return 0;
}