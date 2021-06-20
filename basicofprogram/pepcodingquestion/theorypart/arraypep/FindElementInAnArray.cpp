#include<iostream>
using namespace std;


int main(){
   int n;
  cout<<"Enter a number: "<<endl;
   cin>>n;
   
   
   int arr[n];
  cout<<"Enter a number of elements of array : "<<endl;
   for(int i=0;i<n;i++){
       cin>>arr[i];      // 15,30,40,4,11,9
   }
   
   int d;  // d=40
  cout<<"Enter a number d: "<<endl;
   cin>>d;
int idx=-1;
int i=0;
//    for(int i=0;i<n;i++){
    while(i<n){
       if(arr[i]==d){
           idx=i;
           break;
       }
       
       i++;
   }
   cout<<idx;
  
}