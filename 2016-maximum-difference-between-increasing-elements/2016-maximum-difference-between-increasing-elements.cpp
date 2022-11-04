class Solution {
public:
    int maximumDifference(vector<int>& nums) {
         int mini = nums[0], ans = 0;
        for (int i = 1; i < nums.size(); i++) {
            ans = max(ans, nums[i] - mini);
            mini = min(mini, nums[i]);
        }
        if(ans==0) return -1;
        return ans;
    }
};