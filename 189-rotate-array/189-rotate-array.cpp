class Solution {
public:
    void swapTheArray(vector<int>& nums, int f,int l){
        while(f<l){
            swap(nums[f],nums[l]);
            f++;
            l--;
        }    
    }
    
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k=k%n;
        swapTheArray(nums,0,n-1-k);
        swapTheArray(nums,n-k,n-1);
        swapTheArray(nums,0,n-1);
    }
};