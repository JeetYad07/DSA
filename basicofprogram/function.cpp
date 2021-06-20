#include<iostream>
using namespace std;

// void display(){
//     cout<<"Hello";
// }

// function for adding two float values.
// float add(float x, float y){
//     float z=x+y;
//     return z;
// }

// maximum of three numbers..

int maximum(int x, int y,int z){
if(x>y && x>z){
    return x;
}
else if(y>z){
    return y;
}
else{
    return z;
}



}

int main(){
    // display();
int a,b,c,r;
cout<<"Enter values of a, b, c :"<<endl;
cin>>a>>b>>c;
// c=add(a,b);
r=maximum(a,b,c);
cout<<"Maximum value is: "<<r<<endl;

    return 0;
}