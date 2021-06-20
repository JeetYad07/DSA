// * *	*	*	*	*	*	
// 	 *				*	       
// 		*		*	
// 			*	
// 		*	*	*	
//   *	*	*	*	*	
// * *	*	*	*	*	*	

// 1 approcah try to print pattern when upper half also acquire stars    sp  st
// * *	*	*	*	*	*	                                              0   7
// 	 *	*	*	*	*	                                                  1   5
// 		*	*	*	                                                      2   3
// 			*	                                                          3   1
// 		*	*	*	                                                      2   3
//   *	*	*	*	*	                                                  1   5
// * *	*	*	*	*	*	                                              0   7

// 2. aftre that we have to remove stars from 2 row to 3 row and from 2 second to n-1 star

// * *	*	*	*	*	*	
// 	 *				*	        logic is choose 2 row and 3 row of first half  (i>1 && i<n/2)
// 		*		*	      and for column selection choose after 2 star to star-1(j>1 && j<=st)
// 			*	
// 		*	*	*	
//   *	*	*	*	*	
// * *	*	*	*	*	*
#include <iostream>
using namespace std;
int main(int agrc, char**argv){
    int n;
    cin >> n;

int sp=0;
int st=n;
for(int i=1;i<=n;i++){

for(int j=1;j<=sp;j++){
    cout<<"\t";
}
for(int j=1;j<=st;j++){
    if(i>1 && i<=n/2 && j>1 && j<st){
        cout<<"\t";
    }else{
         cout<<"*\t";
    }
    
}
for(int j=1;j<=sp;j++){
    cout<<"\t";
}

// cout<<sp<<" "<<st;
if(i<=n/2){
    sp++;
    st-=2;
}else{
    sp--;
    st+=2;
}
cout<<endl;

}



    //write your code here
    
}