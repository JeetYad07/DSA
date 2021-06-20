#include<iostream>
using namespace std;

int getSingledigitmult(int b, int n1, int ld2){
    // b=8, n1=743,  ld2=4
    int p=1;
    int carry=0;
    int ans=0;
    while(n1!=0 || carry!=0){ 
        // untill n1>0 or carry>0
        // do below operation

        int ld1=n1%10;// extraction of a digit
        n1/=10;
        int product=(ld1*ld2)+carry; // multiplication of ld1 and ld2 by addng carry
        int q=product/b;
        int r=product%b;
        carry=q;
        ans+=(r*p);
        p*=10;

    }
    return ans;  // 3614
}

int anybaseaddition(int b, int n1, int n2) {// 8,0,7413
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
  
  return ans;  // 7413


    
}



int getProduct(int b, int n1, int n2){

int ans=0;
int p=1;
while(n2!=0){
    int ld2=n2%10;
    n2/=10;
    int pwsd=getSingledigitmult(b,n1,ld2); // 7413/ 2651 /1706
    ans=anybaseaddition(b,ans,pwsd*p);  // 7413+26510 / 170600=
    p*=10;

}
return ans;

}


// int getProduct(int b, int n1, int n2){
//     // write your code here
    
// }

int main(){
    int b, n1, n2;
    cin>>b>>n1>>n2;
    // cout<<getProduct(b,n1,n2)<<endl;
    cout<<getProduct(b,n1,n2)<<endl;
}