class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int rightSum=0,leftSum=0;
       for(int i=0;i<nums.size();i++){
           rightSum = rightSum + nums[i];
       } 
       for(int i=0;i<nums.size();i++){
           rightSum = rightSum - nums[i];
           if(leftSum==rightSum) return i;
           leftSum = leftSum + nums[i];
       }
        return -1;
    }
};