#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char **argv){ 
    // inverse of a number is when face value =index value.  
    // Assumptions: for inverse is for n=5, the digit of 5 digit number should be from 1to5.
    // 2. No repetation allowed.
    // n=4, 4 1 3 2 =original number.... inverted no= 4 2 1 3 
    int n;
    cout<<"Enter the number: "<<endl;
    cin >> n;
    int inverse=0;
    int op=1;
    while(n>0){
        int od= n%10;  // od: last digit of original number
        int id=op;     // id: inverted digit
        int ip=od;     // ip: inverted poistion
        inverse+=(id*pow(10,ip-1));
        n=n/10; 
        op++; // increment the original poistion
    }
    cout<<inverse<<endl;
   

    //write your code here
    
}