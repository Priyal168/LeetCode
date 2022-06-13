// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    bool solve(int src, vector<bool>&vis, vector<int>&order, vector<int>adj[]){
       vis[src]=true;
       order[src]=1;
       for(auto x : adj[src]){
           if(!vis[x]){
               bool conf=solve(x,vis,order,adj);
               if(conf==true) return true;
           }
           else if(order[x]) return true;
       }
       order[src]=0;
       return false;
   }
   bool isCyclic(int v, vector<int> adj[]) {
       vector<bool>vis(v,0);
       vector<int>order(v,0);
       for(int i=0; i<v; i++){
           if(!vis[i]){
               bool c=solve(i,vis,order,adj);
               if(c==true)
               return true;
           }
       }
       return false;
   }
};

// { Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}
  // } Driver Code Ends