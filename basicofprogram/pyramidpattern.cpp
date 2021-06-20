    //         *              deaciding factor is row. ask for num of row=n, column=2n-1
    //       * * *            if(j>=n-(i-1) && j<=n+(i-1))
    //     * * * * *         
    //   * * * * * * *      

    #include<iostream>
    using namespace std;
    int main(){
        int n;
        cout<<"Enter a number of rows: "<<endl;
        cin>>n;
      for(int row=1;row<=n;row++){
          for(int col=1;col<=(2*n)-1;col++){
              if(col>=n-(row-1) && col<=n+(row-1) ){
                  cout<<"*";
              }
              else{
                  cout<<" ";
              }
          }
          cout<<endl;
      }
     
 



        return 0;
    }