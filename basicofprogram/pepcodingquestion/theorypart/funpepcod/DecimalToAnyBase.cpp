// [54]base10=[]base


#include<iostream>
#include<cmath>
using namespace std;

int DecimalToAnyBase(int num,int base){

    int digit=0;
    int num1=0;
    // int num1;
    int rev=0;
    int p=1;
    while(num>0){
        int r=num%base;  // 57%2=1,/ 28%2=0,/14%2=0/ 7%2=1/ 3%2=1 /1%2=1
        //   digit++; // 1/2/3/4/5/6
         rev=r*p;
         p=p*10;
        // rev= pow(10,digit-1); // 1*10^1-1/ 0/ 100*0=0/ 1*1000=1000/ 1*10000/ 1*100000
            num1=num1+rev; //1 / 1+0=1/ 1+0=1/ 1000+1=1001/ 10000+1001=11001 / 100000+11001=111001
         num=num/base; // 57/2=28/ 28/2=14/ 14/2=7/ 7/2=3/ 3/2=1/1/2=0
              
     
    }
   

    return num1; // 111001
}


int main(){
    int num;
    cout<<"Enter a num: "<<endl;
    cin>>num;
    int base;
    cout<<"Enter a base: "<<endl;
    cin>>base;
int num2=DecimalToAnyBase(num, base);
cout<<num2<<endl;
// 111001



    return 0;
}