#include<iostream>
using namespace std;
int main(){
int A[2][3]={3,3,3,3,3,3};
int B[2][3]={1,1,1,1,1,1};
int C[2][3];

// for addition
for(int i=0;i<2;i++){
for(int j=0;j<3;j++){
    C[i][j]=A[i][j]+B[i][j];
   }
}

for(int i=0;i<2;i++){
for(int j=0;j<3;j++){
    cout<<C[i][j];
   }
}


// for subtraction

for(int i=0;i<2;i++){
for(int j=0;j<3;j++){
    C[i][j]=A[i][j]-B[i][j];
   }
}

for(int i=0;i<2;i++){
for(int j=0;j<3;j++){
    cout<<C[i][j];
   }
}



    return 0;
}