#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int num1, num2;
    cout<<"enter two numbers: "<<endl;
    cin >> num1 >> num2;
// first find gcd
 
//  brute force approach is to take smaller no and multiply it untill a numner came when it divide the two...

// second method is divison method we have to divide one num with another until rem==0

int temp1=num1,temp2=num2;  
// because we have to use it in the lcm, after performing operations in gcd, the original no will not remain same

while(num1%num2!=0){        // check until we get rem=0
    int rem=num1%num2;
    num1=num2;
    num2=rem;
}
int gcd=num2;
cout<<"Gcd of number is: "<<gcd<<endl;
int lcm=(temp1*temp2)/gcd;
cout<<"lcm of number is: "<<lcm<<endl;

}

    
