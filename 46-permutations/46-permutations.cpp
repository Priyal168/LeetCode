class Solution {
public:
    void helper(vector<int>& nums , vector<vector<int>>& ans , int in){
       if(in == nums.size()){
           ans.push_back(nums);
           return;
       }    
       for(int i=in ; i<nums.size();i++){
           swap(nums[i],nums[in]);
           helper(nums,ans,in+1);
           swap(nums[i],nums[in]);
       }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        helper(nums,ans,0);
        return ans;
    }
};