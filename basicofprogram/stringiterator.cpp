#include<iostream>
using namespace std;
int main(){

// iterators means pointing  the elements of an string or accessing the elements one by one
string str="today";
string::iterator it;  // to define a iterator  it act as a pointer
for(it=str.begin();it!=str.end();it++){
   *it=*it-32; 
   cout<<*it;
    // to access the elements we have to derefernce it
}
cout<<endl;
// we have reverse iterator

string::reverse_iterator ik;
for(ik=str.rbegin();ik!=str.rend();ik++){
    cout<<*ik;
}




    return 0;
}