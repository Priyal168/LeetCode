class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
       int f=0,l=numbers.size()-1;
       while(f<l){
           if(numbers[f]+numbers[l]==target){
               return {f+1,l+1};
           }
           else if(numbers[l] + numbers[f] > target){
               l--;
           }
           else{
               f++;
           }
       }
        return {};
    }
};