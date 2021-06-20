#include<iostream>
#include<cmath>
using namespace std;



int main(){
int n1,n2;
cout<<"Enter a number1: "<<endl;
cin>>n1;
int* a1=new int[n1]; // for declaring size of an array
cout<<"Enter the elements of array: "<<endl;
for(int i=0;i<n1;i++){
    cin>>a1[i];
}
cout<<"Enter a number2: "<<endl;
cin>>n2;

int* a2=new int[n2]; // for declaring size of an array
cout<<"Enter the elements of array: "<<endl;
for(int i=0;i<n2;i++){
    cin>>a2[i];
}
 // to find the max of
//  int m=n1>n2?n1:n2;
 int m=max(n1,n2);
int* ans=new int[m];

int i=n1-1; // to access the elements from last
int j=n2-1;
int k=m-1;
int carry=0;

while(k>=0){
    // int sum=a1[i]+a2[i]+carry; // but here we can face problem of overflow, because it might be happened that any arr might go to negative values.......
    int sum=carry;
    if(i>=0){
        sum+=a1[i];
    }
    if(j>=0){
        sum+=a2[j];
    }
    int q=sum/10;
    int r=sum%10;
    carry=q;
    ans[k]=r;
    i--;
    j--;
    k--;
}
if(carry!=0){
    cout<<carry<<endl;
}
for(int i=0;i<m;i++){
    cout<<ans[i]<<endl;
}



}