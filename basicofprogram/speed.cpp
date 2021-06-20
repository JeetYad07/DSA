#include<iostream>
#include<cmath>
using namespace std;
int main(){

// float dis,time,speed;
// cout<<"Enter value of dis and time"<<endl;
// cin>>dis>>time;
// speed=dis/time;
// cout<<"speed is: "<<speed;

float u,v,a,speed;
cout<<"Enter three values:"<<endl;
cin>>u>>v>>a;
speed= (v*v-u*u)/(2*a);
cout<<"speed is :"<<speed<<endl;


    return 0;
}