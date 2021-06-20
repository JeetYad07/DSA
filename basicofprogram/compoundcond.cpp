#include<iostream>
using namespace std;
int main(){
int age;
cout<<"Enter age :"<<endl;
cin>>age;
if(age>=12 && age<=50){
    cout<<"Young"<<endl;

}
else{
    cout<<"Not young:"<<endl;
}

if(age<12 || age>50){
    cout<<"Eligible"<<endl;
}else{
    cout<<"Not eligible"<<endl;
}





    return 0;
}