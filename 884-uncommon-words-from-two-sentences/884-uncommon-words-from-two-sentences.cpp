class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
       istringstream combined(s1 + " " + s2);
        
        // our word will be put in this variable by getline
        string word;
        
        // keep track of word occurrences
        unordered_map<string, int> counts;
        
        // get the next word and increase its count in our map
        while (getline(combined, word, ' '))
            counts[word] += 1;
        
        // put the words with an occurrence of 1 in our result vector
        vector<string> result;
        for(auto &p : counts) {
            if(p.second == 1)
                result.push_back(p.first);
        }
        
        return result; 
    }
};