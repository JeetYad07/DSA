#include<iostream>
using namespace std;
int main(){

int x=10;
// here &y in not another variable it is just a nick name or alies given to x
int &y=x; // refernce must be initialize while declaration other wise it will give some error
cout<<x<<endl;
y++;
x++;
cout<<x<<endl;

// int b=20;
// // y=b;    referncing cannot be done on other variable in the same fun
// // int &y=b;



    return 0;
}