#include<iostream>
#include<cmath>
using namespace std;

int main(){
 float price,dis1,dis2,dis3,discounted_bill;
 cout<<"Enter price, dis1, dis2, dis3 : "<<endl;
 cin>>price>>dis1>>dis2>>dis3;

 if(price>=1000){
     discounted_bill=price-(price*dis1)/100.0;
     cout<<discounted_bill<<endl;
 }
else if(price>=500 && price<1000){
    discounted_bill=price-(price*dis2)/100.0;
    cout<<discounted_bill<<endl;
}
else{

discounted_bill=price-(price*dis3)/100.0;
cout<<discounted_bill<<endl;


}





    return 0;
}