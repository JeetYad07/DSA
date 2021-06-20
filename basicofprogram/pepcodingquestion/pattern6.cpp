#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cout<<"enter a number: "<<endl;
    cin >> n;
  int st=n/2+1;
  int sp=1;
  for(int i=1;i<=n;i++){
    //   cout<<(st + "," +sp);
    for(int j=1;j<=st;j++){
        cout<<"*\t";
    }
    for(int j=1;j<=sp;j++){
        cout<<"\t";
    }
    for(int j=1;j<=st;j++){
        cout<<"*\t";
    }
            if(i<=n/2){
          st--;
          sp+=2;
      }else{
          st++;
          sp-=2;
      }
      cout<<endl;
  }

    
}