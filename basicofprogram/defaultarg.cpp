#include<iostream>
using namespace std;

// int sum(int a, int b, int c=0){
//     return a+b+c;
// }

// finding maximum of three numbers

int max(int a,int b=0, int c=0){
  return   a>b && a>c?a:(b>c?b:c);

}

int main(){
    cout<<max(1,4,2)<<endl;
    cout<<max(10,20)<<endl;
    cout<<max(5)<<endl;
    // cout<<sum(12,10);
    // cout<<sum(1,12,6);
    return 0;
}