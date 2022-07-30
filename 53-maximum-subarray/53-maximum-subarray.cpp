class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currmax = nums[0],max=nums[0];
       for(int i=1;i<nums.size();i++){
          if(currmax >=0){
              currmax+=nums[i];
          }else{
              currmax=nums[i];
          }
          if(currmax>max){
              max=currmax;
          }
      }
        return max;
    }
};