#include <iostream>
using namespace std;

                //               *     pattern 8
                //            *  
                //         * 
                //     *
                // *





int main(int argc, char **argv)
{
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
          if(i+j==n+1){
              cout<<"*\t";
          }
          else{
              cout<<"\t";
          }
          
        }
        cout<<endl;
    }

    //write your code here
    
}