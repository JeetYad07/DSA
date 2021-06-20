#include<iostream>
using namespace std;
int main(){

// int A[2][3]={{1,2,3},{4,5,6}};
// we can also take values from users..
int A[2][3];
// for accessing element we will use two for loops, one for row and other for column
// for (int i = 0; i < 2; i++)
// {
//    for (int j = 0; j < 3; j++)
//    {
//       cout<<A[i][j]<<" ";
//    }
//    cout<<endl;
   
// }

// we can also use for each loop;

// for reading values of 2-D array
for( auto &x:A){
    for(auto &y:x){
        cin>>y;
    }
    cout<<endl;
}



// for printing values in 2-D array
for( auto &x:A){
    for(auto &y:x){
        cout<<y<<" ";
    }
    cout<<endl;
}



    return 0;
}