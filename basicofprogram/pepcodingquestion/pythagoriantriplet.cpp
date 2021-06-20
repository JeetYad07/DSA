#include <iostream>
#include<cmath>
using namespace std;


int main(int argc, char **argv){
    int a,b,c;
    cin >> a >> b >> c;
    
    if(a>b && a>c){
        bool flag=((a*a)==(b*b)+(c*c));
        cout<<flag;
    }
    else if(b>c){
        bool flag= ((b*b)==(a*a)+(c*c));
         cout<<flag;
        
    }
    else{
       bool flag=((c*c)==(a*a)+(b*b));
       cout<<flag;
    }
    
    
    //write your code here
    
}