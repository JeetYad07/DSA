#include <bits/stdc++.h>
using namespace std;

class Solution {
    
public:
    int findDuplicate(vector<int>& nums) {
      
        
        int n=sizeof(nums)/sizeof(nums[0]);
         sort(nums.begin(),nums.end());
        int k=0;
        for(int i=1;i<=n;i++){
            if(nums[i]==nums[k]){
                // k=nums[i];
                break;
            }
            else{
                k=k+1;
            }
        }
    
     return nums[k] ;
    }

};
int main(){
vector<int> nums=[2,5,9,6,9,3,8,9,7,1];
vector<int> findDuplicate();
 cout<<findDuplicate(nums);


    return 0;
}