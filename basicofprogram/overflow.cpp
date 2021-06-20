#include<iostream>
using namespace std;
int main(){
    
// overflow is when value our variable is come out of range of data type then this is called as overflow..
// in case of char data type range is from -128 to 127

int y=INT16_MAX;
// y++;
cout<<y<<endl;

    char x=127;
    ++x;
    cout<<(int)x<<endl;
   
    // here output is coming out of -128
    // ans =! 128 in plus because it is excedding its range and this is called as overflow
    // but if we add more no to it then its value i
    
    
    return 0;

}