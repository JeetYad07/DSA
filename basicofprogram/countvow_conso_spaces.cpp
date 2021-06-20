#include<iostream>
using namespace std;
int main(){
int vow_counter=0,conson_counter=0,space_counter=0;
string str="how   Many wOrds";  // length of string is 18
for(int i=0;str[i]!='\0';i++){
  if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' ){
      vow_counter++;
  }
  else if(str[i]==' '){
      space_counter++;
  }
  else{
      conson_counter++;
  }


}
cout<<space_counter<<endl;


















// for(int i=0;str[i]!=0;i++){
//     if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' ||str[i]=='U' ||str[i]=='a' ||str[i]=='e' ||str[i]=='i' || str[i]=='o' || str[i]=='u' ){
//         vow_counter++;
//     }
//     else if(str[i]==' '){
//         space_counter++;
//     }
//     else{
//         conson_counter++;
//     }
// }

// cout<<"number of vowels: "<<vow_counter<<endl;
// cout<<"number of consonants: " <<conson_counter<<endl;
// cout<<"number of words: "<<space_counter+1<<endl;


    return 0;
}