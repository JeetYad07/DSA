#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cout<<"Enter a number: "<<endl;
    cin >> n;
    int nstars=n; // it will tell us how many stars to be printed 
    for(int i=1;i<=n;i++){
        // for(int j=n+1-i;j>0;j--){
        //     cout<<"*\t";
        // }
        for(int j=1;j<=nstars;j++){
            cout<<"*\t";
        }
        nstars--;
        cout<<endl;
    }
    
    //write your code here
    
}