#include<iostream>
using namespace std;
int main(){
int day;
cout<<"enter day num: "<<endl;
cin>>day;
// if(day>0 &&day<=7){
// if(day==1){
//     cout<<"Monday"<<endl;
   
// }
// else if(day==2){
//     cout<<"Tuesday"<<endl;
   
// }
// else if(day==3){
//     cout<<"Wednesday"<<endl;
    

// }
// else if(day==4){
    
// cout<<"Thursday"<<endl;

// }
// else if(day==5){
//     cout<<"Friday"<<endl;
   
// }
//  else if(day==6){
//     cout<<"Saturday"<<endl;
 
// }
// else{
//     cout<<"Sunday"<<endl;
  
// }

// }else{
//     cout<<"invalid input"<<endl;
// }

// more efficient way is to use switch case....


switch (day)
{
case 1:
   cout<<"Monday";
    break;
case 2:
   cout<<"Tuesday";
    break;
case 3:
   cout<<"Wednesday";
    break;
case 4:
   cout<<"Thursday";
    break;
case 5:
   cout<<"Friday";
    break;
case 6:
   cout<<"Saturday";
    break;
case 7:
   cout<<"Sunday";
    break;

default: cout<<"Invalid input"<<endl;
    break;
}


    return 0;
}
