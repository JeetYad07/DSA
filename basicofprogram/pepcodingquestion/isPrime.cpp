#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int t;
    cout<<"enter number of test case:"<<endl;
    cin >> t;
    for(int i=1;i<=t;i++){
        int n;
        cout<<"Enter number:"<<endl;
        cin>>n;
        int div=2;
        while(div*div<=n){
            if(n%div==0){
                break;
            }
            div++;
        }
        
        if(div*div>n){
            cout<<"prime"<<endl;
        }
        else{
            cout<<"not prime"<<endl;
        }
        
        
    }
    return 0;

  }
    
    
    
    
