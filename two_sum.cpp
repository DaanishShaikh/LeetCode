#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>v;
        bool flag=0;
        for(int i=0 ; i<nums.size() ; i++){
            for(int j=0 ; j<nums.size() ; j++){
                if(nums[i]+nums[j]==target&&(i!=j)){
                    v.push_back(i);
                    v.push_back(j);
                    flag=1;
                    break;
                }
            }
            if(flag){
                break;
            }
        }
            return v;

    }
    cout<<twosum<<endl;
};