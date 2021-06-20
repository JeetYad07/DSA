// function template can we used when we want same fun with same logical operation inside but have different data type
#include<iostream>
using namespace std;
template<class T>
T sum(T a, T b, T c){
    return a+b+c;
}




int main(){
cout<<sum(120,154,10)<<endl;
cout<<sum(120.6f,154.01f,10.15f)<<endl;



    return 0;
}