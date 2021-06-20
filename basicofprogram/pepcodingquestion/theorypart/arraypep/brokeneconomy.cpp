#include<iostream>
using namespace std;

int main(){
    int n;
    // cout<<"Enter a number: "<<endl;
    cin>>n;
    int* arr = new int[n];
    // cout<<"Enter elements of array: "<<endl;
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }
    int data;
    // cout<<"Enter data: "<<endl;
    cin>>data;
   int l=0;
   int h=n-1;
   int ceil=0; // upperbound
   int floor=0; // lowerbound
   while(l<=h){
       int m=(l+h)/2;
       if(data<arr[m]){
           h=m-1;
           ceil=arr[m];
       }
       else if(data>arr[m]){
           l=m+1;
           floor=arr[m];

       }
       else{
           ceil=arr[m];
           floor=arr[m];
           return 0;
       }
      
       
   }
       cout<<ceil<<endl;
        cout<<floor<<endl;
        
    
}