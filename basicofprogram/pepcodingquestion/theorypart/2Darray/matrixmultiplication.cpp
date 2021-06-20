#include<iostream>
using namespace std;
int main(){
    
 // for taking input for array1;
  int r1;
  int c1;
  cin>>r1>>c1;
 int arr1[r1][c1];
 for(int i=0;i<r1;i++){
      for(int j=0;j<c1;j++){
          cin>>arr1[i][j];
      }
  }

 // for taking input of array2;   
int r2;
int c2;
cin>>r2>>c2;
int arr2[r2][c2];
  for(int i=0;i<r2;i++){
      for(int j=0;j<c2;j++){
          cin>>arr2[i][j];
      }
  }
    

if(c1!=r2){
    cout<<"Invalid input";
    return 0 ;
}
    
int prd[r1][c2];
int sum=0;
// int n=sizeof(prd)/sizeof(prd[0]);
// cout<<n;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            for(int k=0;k<r2;k++){
              sum+=arr1[i][k]*arr2[k][j];
                
            }
            prd[i][j]=sum;
            sum=0;
        }
    }
    
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            cout<<prd[i][j]<<" ";
            // if(j==c2-1){
            //       cout<<endl;
            // }
        }
        cout<<endl;
      
    }
    
    
    return 0;
}