#include<iostream>
using namespace std;

void reverse(int* arr, int i, int j){
   // write your code here
   int l1=i;
   int r1=j;
   while(l1<r1){
       int temp=arr[l1];
       arr[l1]=arr[r1];
       arr[r1]=temp;
       l1++;
       r1--;
   }
    
}

void rotate(int* arr, int n, int k){
  k=k%n;
  if(k<0){ // k=-1 == k=4 //same 
      k+=n;
  }
  reverse(arr, 0, n-k-1);  // part 1  after partition...
  reverse(arr,n-k,n-1); // second part after rotation  
  reverse(arr, 0, n-1);
  
}

void display(int* arr, int n){
    for(int i = 0 ; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n, r;
    cin>>n;
    int* arr = new int[n];
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }
    cin>>r;
    
    rotate(arr,n,r);
    display(arr,n);
}