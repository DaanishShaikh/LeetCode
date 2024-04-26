class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int upper=nums.size()-1;
        int lower=0;
        int mid=(upper+lower)/2;

        while(upper>=lower){
            if(nums[mid]>target){
                upper=mid-1;
                mid=(upper+lower)/2;
            } else if(nums[mid]<target){
                lower=mid+1;
                mid=(upper+lower)/2;
            } else if(nums[mid]==target){
                return mid;
            }
        }
        if(target<nums[0]){
            return 0;
        }
        return mid +1;
    }
};