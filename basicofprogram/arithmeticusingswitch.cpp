#include<iostream>
#include<cmath>
using namespace std;
int main(){
int oper,a,b;
cout<<"Enter the values: "<<endl;
cin>>oper>>a>>b;

switch (oper)
{
case 1:
cout<<"Sum is :"<<a+b<<endl;
    break;

case 2:
cout<<"Sub is :"<<a-b<<endl;
    break;
case 3:
cout<<"Mul is :"<<a*b<<endl;
    break;
 case 4:
cout<<"div is :"<<a/b<<endl;
    break;
case 5:
cout<<"Mod is :"<<a%b<<endl;
    break;


default:cout<<"Invalid input"<<endl;
    break;
}








    return 0;
}