#include<iostream>
using namespace std;
int main(){
    
    int nor,noc;
    cin>>nor>>noc;
    // int *arr=new int[nor][noc];
    int arr[nor][noc];
    for(int i=0;i<nor;i++){
        for(int j=0;j<noc;j++){
            cin>>arr[i][j];
        }
    }
    
    for(int i=0;i<nor;i++){
        if(i%2==0){
          for(int j=0;j<noc;j++){
              cout<<arr[i][j]<<" ";
              cout<<endl;
          }
        }
        else{
        for(int j=noc-1;j>=0;j--){
              cout<<arr[i][j]<<" ";
              cout<<endl;
           }
        }
    }
    
    
    
    
    
    
    
    
    
    
    return 0;

}