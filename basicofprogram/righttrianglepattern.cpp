// * * * *  i=0,j=0,1,2,3        
// * * *    i=1,j=0,1,2        concept is take i=0 to n and j=0 to n-i
// * *      i=2,j=0,1
// *        i=3,j=0

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;
for(int i=0;i<n;i++){
    for(int j=0;j<n-i;j++){
        cout<<"* ";
    }
    cout<<endl;
}

    return 0;
}