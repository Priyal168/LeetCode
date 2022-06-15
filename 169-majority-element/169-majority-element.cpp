class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int count = nums.size()/2;
        unordered_map<int, int> umap;
        for(int i=0;i<nums.size();i++){
            umap[nums[i]]++;
            if(umap[nums[i]]>count){
                return nums[i];
            }
        }
        return 0;
    }
};