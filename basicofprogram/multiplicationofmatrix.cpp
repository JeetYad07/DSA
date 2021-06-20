#include<iostream>
using namespace std;
int main(){
int a[TMP_MAX][TMP_MAX],b[TMP_MAX][TMP_MAX],mult[TMP_MAX][TMP_MAX],arows,acolumns,brows,bcolumns,sum=0;
// to access rows and coulumns of a matrix
cout<<"Enter the rows and columns of a matrix: "<<endl;
cin>>arows>>acolumns;
cout<<"Enter elements of matrix a:"<<endl;
for(int i=0;i<arows;i++){
    for(int j=0;j<acolumns;j++){
        cin>>a[i][j];
    }
}
// for accessing the elements of b matrix..........
cout<<"Enter the rows and columns of b matrix: "<<endl;
cin>>brows>>bcolumns;
cout<<"Enter elements of matrix b:"<<endl;
for(int i=0;i<brows;i++){
    for(int j=0;j<bcolumns;j++){
        cin>>b[i][j];
    }
}

// for multiplying 
for(int i=0;i<arows;i++){
    for(int j=0;j<bcolumns;j++){
        for(int k=0;k<brows;k++){
            sum+=a[i][k]*b[k][j];
        }
         mult[i][j]=sum;
         sum=0;
    }
   
}
// to print the product of two matrices




    return 0;
}