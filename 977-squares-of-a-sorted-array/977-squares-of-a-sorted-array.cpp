class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
     vector<int>ans(nums.size());
						int i=0;
						int j=nums.size()-1;
						for(int k=nums.size()-1;k>=0;k--)
						{
							if(abs(nums[i]) < abs(nums[j]))
							   {
								   ans[k] = nums[j]*nums[j];
								   j--;
							   }
							   else
							   {
								   ans[k] = nums[i]*nums[i];
								   i++;
							   }
						}
							   return ans;   
    }
};