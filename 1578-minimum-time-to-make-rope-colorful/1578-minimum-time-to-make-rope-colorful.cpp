class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
       int ans = 0;
        for(int i =0;i<colors.size();){
            int j = i+1;
            int mini = neededTime[i];
            int sum = neededTime[i];
            while(j<colors.size()&&colors[j]==colors[j-1]){
                sum+=neededTime[j];
                mini = max(mini,neededTime[j]);
                j++;
            }
            ans +=(sum-mini);
            i = j;
        }
        return ans;   
    }
};