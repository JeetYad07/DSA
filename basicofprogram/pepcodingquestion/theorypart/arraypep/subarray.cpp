#include<iostream>
using namespace std;


// n=3  1 2 3  for loop i=0 to i<arr.length
// subarray  1  for loop j=i to i<arr.length ,  k=i, k<=j
//           1 2
//           1 2 3
//             2
//             2 3
//               3
int main(){
    int n;
    cin>>n;
    int* arr = new int[n];
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }
    
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                cout<<arr[k]<<"\t";
            }
            cout<<endl;
        }
        
    }
    
}