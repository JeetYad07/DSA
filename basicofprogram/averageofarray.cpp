#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter a number: "<<endl;
cin>>n;
cout<<"Enter number of elements: "<<endl;
float A[100],sum=0.0,avg;


for(int i=0;i<n;i++){
    cout<<i + 1<<"Enter number: "<<endl;
    cin>>A[i];
    sum+=A[i];
}

avg=(float)sum/n;
cout<<"average value is: "<<avg;






    return 0;
}