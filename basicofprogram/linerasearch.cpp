// program to search an elemnet using linear search
#include<iostream>
using namespace std;
int main(){
int n=7,A[n],sum=0;
cout<<"Enter elements of an array:"<<endl;
for(int i=0;i<n;i++){
    cin>>A[i];
}
int key;
cout<<"Enter key value: "<<endl;
cin>>key;
for(int i=0;i<n;i++){
    if(A[i]==key){
    cout<<"Found"<<endl;
     return 0;
    }
     
}

cout<<"not found"<<endl;

    return 0;

}