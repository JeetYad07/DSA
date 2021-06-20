#include<iostream>
using namespace std;
int main(){
int A[5]={1,0,5,7,3};
// int A[5];
int n=5;

cout<<"Enter value of array:"<<endl;
for(int i=0;i<n;i++){
    cin>>A[i];
}
int max=INT16_MIN;
int min=INT16_MAX;

for(auto x:A){
    if(max<x){
        max=x;
    }
    if(min>x){
        min=x;
    }
}



// for (int i = 1; i < 5; i++)
// {
//    if(max<A[i]){
//        max=A[i];
//    }

// }
cout<<"maximum value is: "<<max<<endl;
cout<<"minimum value is: "<<min<<endl;
    return 0;
}