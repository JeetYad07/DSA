// function overload is when same name can be used if arruguments are different in numbers, different in data types
#include<iostream>
using namespace std;

int add(int x,int y){
    return x+y;
}

float add(float x, float y){
    return x+y;
}
// float add(float x, float y){  not allowed
//     return x+y;
// }
int add(int x, int y, int z){
    return x+y+z;
}




int main(){
cout<<add(10,5)<<endl;
cout<<add(12.5f,5.7f)<<endl;
cout<<add(14,10,12)<<endl;
    return 0;
}