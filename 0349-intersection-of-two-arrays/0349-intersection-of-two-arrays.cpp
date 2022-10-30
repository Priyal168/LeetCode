class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
       unordered_map<int,int> map;
        vector<int> ans;
        for(int i=0; i<nums1.size(); i++){
            map[nums1[i]]++;
        }
        for(int i=0; i<nums2.size(); i++){
            if(map.find(nums2[i])!=map.end()){
                if(map[nums2[i]]!=-1)
                    ans.push_back(nums2[i]);
                    map[nums2[i]]=-1;
            }
        }
        return ans;
    }
};