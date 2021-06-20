#include<iostream>
using namespace std;

// this is called pass by value fun, here value of a and b will not be able to swap
// void swap(int x, int y){
//     int temp=x;
//    x=y;
//     y=temp;
// }

// call by address
// void swap(int *x, int *y){ to access the address we have to use pointer..
//     int temp=*x;
//    *x=*y;
//     *y=temp;
// }

//this is called call by refernce, here name of a and b varialbe changes to or nick name given to a and b as &x and &y
void swap(int &x, int &y){
    int temp=x;
   x=y;
    y=temp;
}

int main(){

int a=10,b=20;
swap(a,b);
cout<<"value of a and b"<<" "<<a<<" "<<b<<endl;

    return 0;
}