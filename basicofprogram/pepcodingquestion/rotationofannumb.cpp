#include <iostream>
#include<cmath>

using namespace std;
int main() {
  int n, k;
  cin >> n >> k;
  int temp = n; // 
  int nod = 0;
  while (temp > 0) {
    temp = temp / 10;
    nod++;

  }

  // if value of k>n// in this case the rotation should be started from begining
  k=k%nod;
  if(k<0){
      k+=nod;
  }

  int div = 1; // for divison
  int mult = 1; // for multiplication of a number..

  for (int i = 1; i <= nod; i++) { // loop is used to calculate div and multiplier values..
    if (i <= k) {
      div *= 10;
    } else {
      mult *= 10;
    }
  }

  int q = n / div;
  int r = n % div;
  int rot = r * mult + q;
  cout << rot << endl;

  //write your code here

}