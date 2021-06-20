#include<iostream>
using namespace std;
int main(){
int A[10]={1,5,6,8,12,15,18,25,28,30};
int key;
cout<<"Enter a key: "<<endl;
cin>>key;
int l=0,h=9;
int mid=0;
while(l<=h){
mid=(l+h)/2;
if(A[mid]==key)
{
    cout<<"element is found at index: "<<mid<<endl;
    return 0;
}
else if(A[mid]<key){
    l+=mid;
}
else{
    h-=mid;
  }
}
cout<<"Not found";



    return 0;
}