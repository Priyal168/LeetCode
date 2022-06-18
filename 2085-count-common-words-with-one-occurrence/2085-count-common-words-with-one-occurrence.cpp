class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
       unordered_map<string, pair<int,int>> mp;
        for(int i = 0 ; i < words1.size() ; i++) mp[words1[i]].first++;
        for(int i = 0 ; i < words2.size() ; i++) mp[words2[i]].second++;
        int cnt = 0;
        for(auto str : mp) if(str.second.first == 1 && str.second.second == 1) cnt++;
        return cnt; 
    }
};