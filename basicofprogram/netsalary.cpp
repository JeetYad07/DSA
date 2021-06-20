#include<iostream>
#include<cmath>
using namespace std;

int main(){
    
    float basic_sal, per_al,per_ded,net_salary;
    cout<<"Enter value of basicsalary,perofall,percofded"<<endl;
    cin>>basic_sal>>per_al>>per_ded;
    net_salary= basic_sal+(basic_sal*per_al)/100-(basic_sal*per_ded)/100;
cout<<"netsalary is :"<<net_salary<<endl;    
    
    
    
    return 0;

}