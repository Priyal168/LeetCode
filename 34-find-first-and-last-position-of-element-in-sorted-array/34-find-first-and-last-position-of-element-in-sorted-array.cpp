class Solution {
public:
    int firstOcc(vector<int>& nums,int n, int target){
        int s = 0,e=n-1,key=-1;
        while(s<=e){
            int mid = s + (e-s)/2;
            if(nums[mid]==target){
               key = mid;
               e = mid-1;
            }
            else if(target<nums[mid]){
                e = mid -1;
            }
            else{
                s = mid+1;
            }
        }
        return key;
    }
    int lastOcc(vector<int>& nums, int n, int target){
        int s = 0,e=n-1,key=-1;
        while(s<=e){
            int mid = s + (e-s)/2;
            if(nums[mid]==target){
               key = mid;
               s = mid+1;
            }
            else if(target<nums[mid]){
                e = mid -1;
            }
            else{
                s = mid+1;
            }
        }
        return key;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int n = nums.size();
        if(nums.size()==0){
            ans.push_back(-1);
            ans.push_back(-1);
            return ans;
        }
         int f = firstOcc(nums,n,target);
         int l = lastOcc(nums,n,target);
         ans.push_back(f);
         ans.push_back(l);
         return ans;
    }
};