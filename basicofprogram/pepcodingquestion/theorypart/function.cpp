// function fun(int x)----> it will give output after processing



// write a program to print square of a num
// WAP to find npr permutation...
#include<iostream>
using namespace std;

// int xSquare(int x){// int x--> is input
//     int z=x*x;       this is process part of a fun
//     return z;
// }
void disp(int n,int r, int npr){
    cout<<n<<"P"<<r<<" = "<<npr<<endl;
}
int fact( int x){
    int rv=1;
    for(int i=1;i<=x;i++){
    rv=rv*i;
    }
    return rv;
}


int main(){

int n;
int r;
cout<<"Enter value of: "<<endl;
cin>>n>>r;
int nfact=fact(n);
int nmpr=fact(n-r);
int npr=nfact/nmpr;
disp(n,r,npr);
// // int c=xSquare(a);
// cout<<"Value of a square is: "<<c<<endl;

    return 0;
}