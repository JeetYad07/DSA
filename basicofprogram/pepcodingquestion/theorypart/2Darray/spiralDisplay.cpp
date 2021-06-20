// #include<iostream>
// using namespace std;
// int main(){

// int n,m; //n=rows,m=col
// cin>>n>>m;
// // array defining
// int arr[n][m];
// //array inp
// for(int i=0;i<n;i++){
//     for(int j=0;j<m;j++){
//         cin>>arr[i][j];
//     }
// }


// int minr=0;
// int minc=0;
// int maxr=n-1;
// int maxc=m-1;



// while(minr<=maxr && minc<=maxc){
    
//     // left wall
//   for(int i=minr,j=minc;i<=maxr;i++){
//       cout<<arr[i][j]<<endl;
      
//   }
//   minc++;


//     //bottom wall
// for(int i=maxr,j=minc;j<=maxc;j++){
//       cout<<arr[i][j]<<endl;
// }
//   maxr--;

//     // right wall
//     if(minc<=maxc){
//         for(int i=maxr,j=maxc;i>=minr;i--){
//       cout<<arr[i][j]<<endl;
//   }
//   maxc--;
//     }


//     //top wall
//     if(minr<=maxr){
//          for(int i=minr,j=maxc;j>=minc;j--){
//      cout<<arr[i][j]<<endl;
     
//   }
//   minr++;
//     }
   
  
// }




//     return 0;
// }

#include<iostream>
#include<vector>
using namespace std;
int n,m;
void spiralDisplay(vector<vector<int>> arr){
int top=0,bottom=n-1;
int left=0,right=m-1;
int dir=0; // to define in which dir we have to move

while(top<=bottom && left<=right){
    if(dir==0){
        for(int i=left;i<=right;i++){
            cout<<arr[top][i]<<endl;
        }
    }
}

}



int main(){

cin>>n>>m;
vector<vector<int>> arr(n,vector<int>(m));
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>arr[i][j];
    }
}

spiralDisplay(arr);
    return 0;
}