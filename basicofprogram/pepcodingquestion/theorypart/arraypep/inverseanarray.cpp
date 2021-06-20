#include<iostream>
using namespace std;

int* inverse(int* arr, int n){
    int* inv=new int[n];
    // we have to find poistion for indexes
    for(int i=0;i<n;i++){
        int pos=arr[i]; // to access the poistin for index..
        inv[pos]=i; // putting value of indexes into respective position.......
    }
    return inv;
    
}

void display(int* arr, int n){
    for(int i = 0 ; i < n; i++){
        cout<<arr[i]<<endl;
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    int* arr = new int[n];
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }
    
    int* inv = inverse(arr,n);
    display(inv,n);
    
}