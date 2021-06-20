#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

  int st=n;
  int sp=0;

  for(int i=1;i<=n;i++){
      for(int j=1;j<=sp;j++){
          cout<<"\t";
      }
      for(int j=1;j<=st;j++){
          cout<<"*\t";
      }
      
      sp++;
      st--;
      cout<<endl;
  }

    //write your code here

}