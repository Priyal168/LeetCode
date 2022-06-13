class Solution {
public:
   bool helper(vector<vector<int>>&graph,vector<int>&colour,int curr)
    {
        for(auto it:graph[curr])
        {
            if(colour[it]==colour[curr])
            {
                return false;
            }
            else if(colour[it]==0)
            {
                colour[it]=-colour[curr];
                if(!helper(graph,colour,it))
                {
                    return false;
                }
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) 
    {
        int n=graph.size();
        vector<int>colour(n,0);
        for(int i=0;i<n;i++)
        {
            if(colour[i]==0) 
            {
                colour[i]=-1;
                if(!helper(graph,colour,i))
                    return false;
            }
        }
        return true;
    }
};