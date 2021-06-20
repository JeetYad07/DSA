// * * * *      *       1. row conatins i=1 and col= j==n or j<=n/2+1
//       *      *       2 and 3 row have same pattern i=2 and i=3 , col= j==n/2+1 || j==n
//       *      *     i<=n/2
// *  *  *  * * *
// *     *             5 and 6 row have same pattern i=5 and i=6 , col= j==n/2+1 || j==n
// *     *             i>n/2+1
// *     *  * * *       7. row conatins i=n and col= j==1 or j>=n/2+1

#include <iostream>
using namespace std;
int main(int argc, char** argv){
    int n;
    cin >> n;
    int sp=1;

for(int i=1;i<=n;i++){
   for(int j=1;j<=n;j++){

       if(i==1){
           if(j==n || j<=n/2+1){
              cout<<"*\t";
           }
            else{
             cout<<"\t";
             }
       }
       else if(i<=n/2){
           if(j==n|| j==n/2+1){
           cout<<"*\t";
       }
         else{
             cout<<"\t";
            }
       }
       else if(i==n/2+1){
          cout<<"*\t";
       }
       else if(i<n){
          if(j==1 || j==n/2+1){
              cout<<"*\t";
         }
         else{
            cout<<"\t";
           }

       }
       else{
           if(j==1 || j>=n/2+1){
              cout<<"*\t";
          }
          else{
              cout<<"\t";
              }
       }
   }
    cout<<endl;
}
    
}