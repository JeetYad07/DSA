#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int n;
    // cout<<"Enter a number: "<<endl;
    cin >> n;

    for(int div=2;div*div<=n;div++){
        while(n%div==0){
            n=n/div;
            cout<<div<<" ";  
           
        }
    }
    if(n!=1)   // terminating condition or ennding point should be check;
    {
     cout<<n<<" ";
    }
  





return 0;
}