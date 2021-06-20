#include<iostream>
#include<cmath>
using namespace std;

int main (){

float m1,m2,m3,total,avg;
cout<<"Enter marks: "<<endl;
cin>>m1>>m2>>m3;

total=m1+m2+m3;
avg=total/3.0;

if(avg>=60){
    cout<<"Grade is: A "<<endl;
}
else if(avg>=35 && avg<60){

    cout<<"Grade is: B "<<endl;
}
else{
    cout<<"Grade is: C "<<endl;
}

    return 0;
}