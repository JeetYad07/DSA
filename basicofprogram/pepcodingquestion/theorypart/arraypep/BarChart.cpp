#include<iostream>
using namespace std;

// The main concept is here to find max value of an array, which act as a floor or row 

int main(){
  int n;
//   cout<<"Enter a number:"<<endl;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
      cin>>arr[i];
  }
int max=arr[0];
  for(int i=0;i<n;i++){
      if(arr[i]>max){
          max=arr[i];
      }
    
     }
     for(int floor=max;floor>0;floor--){  // this will act as a row or max value in a array
         for(int i=0;i<n;i++){ // This will be for printing elements in column
             if(arr[i]>=floor){ // building height>=floor number
                 cout<<"*\t";
             }
             else{
                 cout<<"\t";
             }
         }
         cout<<endl;
     }
     
    

     
  }
    
    
