#include<iostream>

using namespace std;

int getSum(int b, int n1, int n2) {
   int p=1;
   int carry=0;
   int ans=0;
//    int q=0;
 while(n1>0 || n2>0||carry>0){
    int ld1=n1%10; // extraction of last digit of n1 6
   int  ld2=n2%10;// extraction of last digit of n2 4
     n1=n1/10;   // for reducing no
     n2=n2/10;
    int sum=ld1+ld2+carry;  // 10
    
    
    // carry=q;
    carry=sum/b;  // int q=sum/b; // 10/8=1
    sum=sum%b;    // int r=sum%b; // 10%8==2
    ans+=(sum*p);//2*1  =2
    p*=10;
 }
  
  return ans;


    
}


int main() {
    int b, n1, n2;
    cin >> b >> n1 >> n2;
    cout << getSum(b, n1, n2) << endl;
}