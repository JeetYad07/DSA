#include <iostream>
#include<cmath>
using namespace std;

int main(){
float a,b,c,r1,r2, discriminant, realroot,imgroot;
cout<<"Enter value of a,b,c"<<endl;
cin>>a>>b>>c;
discriminant=(b*b-4*a*c);
if(discriminant>0){
    cout<<"roots are real and different"<<endl;
    r1= (-b+sqrt(b*b-4*a*c)/(2*a));
    r2= (-b-sqrt(b*b-4*a*c)/(2*a));
    cout<<"r1 = "<<r1<<endl;
    cout<<"r2 = "<<r2<<endl;
}
else if(discriminant==0){
    cout<<"roots are real and  equal"<<endl;
    r1=-b/(2*a);
    cout<<"r1 = r2 = "<<r1<<endl;

}
else{
    realroot= -b/(2*a);
    imgroot= sqrt(-discriminant/(2*a));
    cout<<"roots are complex and different "<<endl;
    cout<<"r1 = "<<realroot<<" + "<<imgroot<<"i"<<endl;
    cout<<"r2 = "<<realroot<<" - "<<imgroot<<"i"<<endl;
}

  return 0;
}