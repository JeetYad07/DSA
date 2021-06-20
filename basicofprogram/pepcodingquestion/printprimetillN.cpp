#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int low, high;
    cout<<"Enter low and high numbers: "<<endl;
    cin >> low >> high;
    for(int n=low;n<=high;n++){ // this iteration will print all numbers between low and high
        
        // but we have to print only prime numbers
        // int count=0; // this is use to count how many times a number is dividible
        int div=2;
        // for(int div=2;div*div<=n;div++){
            while(div*div<=n){
            if(n%div==0){ // to check divisibilty of number
                
                break; // as soon as we found a divisor we will break;
            }
            div++;
        }
        // here we didn't do div*div>n
        // if(count==0) // it means we don't have any divisor
        if(div*div>n)   //second method 
          cout<<n<<endl;   
    }
    //write your code here
return 0;
}