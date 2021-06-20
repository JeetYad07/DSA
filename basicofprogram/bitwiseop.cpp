#include<iostream>
using namespace std;
int main(){
int x=20,y=5,z,i,j,k,l,m;
z=x&y;
i=x||y;
j=x^y;
k=~x;
l=x<<1;
m=x>>1;
cout<<i<<" "<<j<<" "<<k<<" "<<(int)l<<" "<<(int)m<<""<<z<<endl;

// cout<<z<<endl;



    return 0;
}