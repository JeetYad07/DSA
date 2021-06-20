#include<iostream>
#include<cmath>
using namespace std;



int main(){
int n1,n2;
// cout<<"Enter a number1: "<<endl;
cin>>n1;
int* a1=new int[n1]; // for declaring size of an array
// cout<<"Enter the elements of array: "<<endl;
for(int i=0;i<n1;i++){
    cin>>a1[i];
}
// cout<<"Enter a number2: "<<endl;
cin>>n2;

int* a2=new int[n2]; // for declaring size of an array
// cout<<"Enter the elements of array: "<<endl;
for(int i=0;i<n2;i++){
    cin>>a2[i];
}
 // to find the max of
int* ans=new int[n2];

int i=n1-1; // to access the elements from last
int j=n2-1;
int k=n2-1;
int borrow=0;

while(k>=0){
   int diff=(a2[j]-borrow);
   if(i>=0){
     diff-=a1[i];
   }
   if(diff<0){
     diff+=10;
     borrow=1;
   }else{
     borrow=0;
   }

    ans[k]=diff;
    i--;
    j--;
    k--;
}

int idx=0;
while(ans[idx]==0){
    idx++;
}
while(idx<n2){
  cout<<ans[idx]<<endl;
  idx++;
}


}