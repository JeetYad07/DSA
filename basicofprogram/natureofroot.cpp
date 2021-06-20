#include<iostream>
#include<cmath>
using namespace std;
int main(){
float a,b,c,d,r1,r2,real_root,img_root;
cout<<"Enter three values: "<<endl;
cin>>a>>b>>c;
d=b*b-4*a*c;

if(d==0){
    cout<<"roots are real and equal : "<<endl;
    cout<< -b/(2*a);

}

else if (d>0)
{
cout<<"roots are real and different: "<<endl;
cout<< (-b+sqrt(b*b-4*a*c)/(2*a));
cout<< (-b-sqrt(b*b-4*a*c)/(2*a));

}
else
{
    real_root=-b/(2*a);
    img_root= sqrt(-(b*b-4*a*c));
    cout<<"roots are imganiary:"<<endl;
    cout<<real_root + img_root<<endl;
    cout<<real_root - img_root <<endl;

}







    return 0;
}