#include <iostream>
using namespace std;
int main(int argc, char**argv){
    int n;
    cin >> n;
    // no of columns is 7, n=4 rows so,, we have col=2n-1
    int st=1;
    int sp=2*n-3; //  sp=2n-3

for(int i=1;i<=n;i++){  // this loop will print rows
   int val=1; // this variable is used to assign value every time a new so we have used it 
  for(int j=1;j<=st;j++){
      cout<<val<<"\t";
    val++;
  }
  for(int j =1;j<=sp;j++){
      cout<<"\t";
  }
  if(i==n){
      // this is for second half because we have to print only three colmns in second half
      st--;
       val--;
  }
  for(int j=1;j<=st;j++){
       val--; 
       // here val-- is used before print because in last loop its value reached to 4, but we have to reduce it every time so we have used it..
      cout<<val<<"\t";
  
  }
  st++;
  sp-=2;
  
cout<<endl;

}
    //write your code here
    
}