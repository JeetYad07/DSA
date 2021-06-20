#include<iostream>
using namespace std;

// enum are used to define a group of integer in a single variable which act as a datatype in furthur.........

enum day {mon=1,tue,wed,thu,fri,sat,sun};

// typedef is use to define userdefine data type.the main purpose is to use this for readiablity........... 
typedef int  marks ;
typedef int  rollno ;

int main(){

marks m1 =50;
marks m2 =55;
int sum= m1+m2;
cout<<sum<<endl;

    day d;
    d= mon; // it is constant type data...
    // we cannot assign numerical value to d !=0
 // increment operator cannot be apply d++   
    
    cout<<mon<<endl;
     cout<<tue<<endl;
     cout<<wed<<endl;
      cout<<thu<<endl;
       cout<<fri<<endl;
     cout<<sat<<endl;
      cout<<sun<<endl;

    
    
    return 0;

}