#include<iostream>
using namespace std;
int main(){
// decalartion and value assigning array
int A[5]{2,4,6,8,10};
int *p=A, *q=&A[4];
// first operation is p++
// to print elements of an array we can simply put loop
for(int i=0;i<5;i++){
// cout<<A[i]<<" ";
// We can also use i[A]
// cout<<i[A]<<" ";
// We cam also use A+i this will print addresses of array
// cout<<A+i<<endl;
// if we want values of array we have to use *(A+i) which act as pointer
// cout<<*(A+i)<<" ";

// We can get values of array by using pointer also
// cout<<p[i]<<" ";
// cout<<i[p]<<" "; this will act same as i[A];

// We can also print of each elements of array by using p++
// cout<<*p<<" ";
// p++;

// we can also perform other operation like p=p+4
// It print the value at index at 4 after that it will print garbage values
// p=p+4;
// cout<<*p<<endl;
// here it will subtract the value at address &A[4] with p  (q-p)/2
cout<<q-p<<endl;

}









    return 0;
}