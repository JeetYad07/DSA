#include<iostream>
#include<cmath>
using namespace std;



int main(){
    
int arr[]={10,20,30,40,50,60,70,80,90,100};
int n=sizeof(arr)/sizeof(arr[0]);
int l=0;
int h=n-1;

while(l<=h){
    int mid=(l+h)/2;
    int data=61;
    if(data<arr[mid]){
        h=mid-1;
    }
    else if(data>arr[mid]){
        l=mid+1;
    }
    else{
        cout<<mid<<endl;
      return 0;
    }
}
cout<<(-1)<<endl;


}