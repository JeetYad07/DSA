#include<iostream>
using namespace std;
int main(){
int n=5;
// cout<<"Enter a number:"<<endl;
int A[n];
cout<<"Enter values of array: "<<endl;

// for(auto x:A){
//     cout<<x<<" ";
// }

for (int  i = 0; i < n; i++)
{
 cin>>A[i];
}

int sum=0;

// for(int i=0;i<n;i++){
// sum+=A[i];
// }
for( auto x:A){
    sum+=x;
}
cout<<"Sum of array is: "<<sum;





    return 0;
}