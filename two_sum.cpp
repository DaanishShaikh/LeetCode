#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int k,l;
      for(int i=0 ; i<nums.size() ; i++){
          for(int j=1 ; j<nums.size() ; j++){
              if(nums[i]+nums[j]==target){
                  k=i;
                  l=j;
              }
          }
      }
      vector<int>p={k,l};
        return p;  
    }
};