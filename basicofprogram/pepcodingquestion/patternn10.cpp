#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
// for n=5, we require 2 outer spaces
    int os=n/2;  
    int is=-1;
    for(int i=1;i<=n;i++){
     for(int j=1;j<=os;j++){  // to print outer space
         cout<<"\t";
     }
     // after outer space we have to print a star...
     cout<<"*\t";
     for(int j=1;j<=is;j++){  // to print inner space
         cout<<"\t";
     }
 // this below step is to check that first and last row does not have more than one star
 if(i>1 && i<n){
     cout<<"*\t";
 }

    //     cout<<os<<" "<<is;
    // //  cout<<(os+","+is);

     if(i<=n/2){
      os--;
      is+=2;
     }
     else{
         os++;
         is-=2;
     }
 


        cout<<endl;
    }
    
}