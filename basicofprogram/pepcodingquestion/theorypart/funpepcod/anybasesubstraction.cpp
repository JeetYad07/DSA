#include<iostream>

using namespace std;

int getSum(int b, int n1, int n2) {
   int p=1;
//    int carry=0;
   int ans=0;
//    int q=0;
int c=0;
// n2>n1...
while(n2>0){  // untill n2 is greater then zero we can perform below operations 

    int ld1=n1%10;  // extraction of digit
    int ld2=n2%10;  // extraction of digit
    int sub=0;   // declaration of sub
    ld2=ld2+c; // increment ld2 by c
     n1=n1/10; // update n1 and n2
    n2=n2/10;
    if(ld2>=ld1){  //  check whether ld2 greater and equal to ld1 or not
        c=0;  // if yes then c=0;
        sub=ld2-ld1;  // perform sub
    }
    else{
        c=-1; // if not assign c=-1,carry part
        sub=(ld2+b)-ld1; // decrease value of ld2 by c
    }
    ans+=(sub*p); // 
    p*=10;

}
return ans;

}

int main() {
    int b, n1, n2;
    cin >> b >> n1 >> n2;
    cout << getSum(b, n1, n2) << endl;
}