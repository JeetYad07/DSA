// *              i=0,j=0
// * *            i=0,j=0 and i=1,j=1  
// * * *          i=0,j=0 and i=1,j=1 and i=2, j=2
// * * * *        concept is use i>=j

#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter a number: "<<endl;
cin>>n;
for(int i=0;i<n;i++){
    // for(int j=0;j<n;j++){
    //     if(i>=j){
    //         cout<<"* ";
    //     }
    // }

    // second method without using condition checking..   use i<=j in for loop.
    for(int j=0;j<=i;j++){
        cout<<"* ";
    }

    cout<<endl;
}


    return 0;
}