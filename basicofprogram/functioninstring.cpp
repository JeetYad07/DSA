#include<iostream>
#include<cstring>
using namespace std;
int main(){
// to find the length of a string we use strlen()fun
// char s[100]{"Hello"};
// we can also ask for user input..
// char str[100];
// cout<<"Enter a string: "<<endl;
// cin.getline(str,100);
// cout<<strlen(str)<<endl;

// we have another fun strcat,  is used to add two string...
// char s1[10];//{"Good"}
// cout<<"Enter string 1:"<<endl;
// cin.getline(s1,10);
// char s2[10];
// cout<<"Enter second string: "<<endl;
// cin.getline(s2,10);

// // strcat(s1,s2); // one more fun for concatination is strncat(dest,source,length)
// strncat(s1,s2,4);
// cout<<s1<<endl;

// to copy one string to another we have strcpy()
// char str1[20];
// char str2[20]={"Jeet Yadav"};
// // strcpy(str1,str2);
// // if you want to copy for certain numbers use strncpy(dest,source,length)
// strncpy(str1,str2,2);
// cout<<"string 1 is:"<<str1<<endl;

// to find a sub string in a main string we use fun strstr(s1,s2)
// char main[100]="programming";
// char sub[10]="j";
// if(strstr(main,sub)!=NULL)
//    cout<<strstr(main,sub)<<endl;
// else
//  cout<<"Not found";
// char main[100];
// cout<<"Enter the main string: "<<endl;
// cin.getline(main,100);

// char chara;
// cout<<"Enter a character: "<<endl;
// cin>>chara;
// if(strchr(main,chara)!=NULL)
//  cout<<strchr(main,chara);  
// else
//   cout<<"Not found"; 
// we can also use strrchr to print from right side of a character

// if(strrchr(main,chara)!=NULL)
//   cout<<strrchr(main,chara)<<endl;
// else
//    cout<<"Not found";  

// // string comparison
// char s1[10]="elder";
// char s2[10]="minor";
// cout<<strcmp(s1,s2)<<endl;

// to go from string to long int use strtol(st1,NULL,base=10)
// to go fron string to float use strtof(str1,NULL)

// char s1[20]="251";
// char s2[20]="25.12";

// long int x=strtol(s1,NULL,10);
// float y=strtof(s2,NULL);

// cout<<x+10<<endl<<y-5<<endl;

char s1[20]="x=20;y=10;z=30";
// cout<<strtok(s1,"=;")<<endl;
char *token=strtok(s1,"=;");
while(token!=NULL){
    cout<<token<<endl;
    token=strtok(NULL,"=;");
}

    return 0;
}