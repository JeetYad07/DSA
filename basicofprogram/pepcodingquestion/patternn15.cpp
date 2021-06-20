#include <iostream>
using namespace std;
int main(int argc, char**argv){
    int n;
    cin >> n;

// first step is to print the diamond like shape of star
int sp=n/2;
int st=1;
int val=1;
for(int i=1;i<=n;i++){
    int cval=val;
    for(int j=1;j<=sp;j++){
        cout<<"\t";
    }
    for(int j=1;j<=st;j++){
        cout<<cval<<"\t";
        
        if(j<=st/2){
           cval++;
        }
        else{
            cval--;
        }
       

    }
    
    
    if(i<=n/2){
        st+=2;
        sp--;
         val++;
    }
    else{
        st-=2;
        sp++;
         val--;
    }
   
    cout<<endl;
}


    //write your code here
    
}