// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int firstocc(vector<int> &arr,int n,int k){
        int start =0;
       int end = n-1;
       int ans = -1;
       while(start<=end){
           int mid = start + (end-start)/2;
           if(arr[mid]==k){
               ans =  mid;
               end = mid-1;
           }
           else if(arr[mid]<k){
               start = mid+1;
           }
           else end = mid-1;
       }
       return ans ;
   }
   int lastocc(vector<int> &arr,int n,int k){
        int start =0;
       int end = n-1;
       int res =-1;
       while(start<=end){
           int mid = start + (end-start)/2;
           if(arr[mid]==k){
               res = mid;
               start = mid+1;
           }
           else if(arr[mid]<k){
               start = mid+1;
           }
           else end = mid-1;
       }
       return res;
   }
 public:
   vector<int> firstAndLast(vector<int> &arr, int n, int x) {
       // Code here
       vector<int> v;
       int p = firstocc(arr,n,x);
       int y = lastocc(arr,n,x);
       if(p == -1 && y == -1){
           v.push_back(-1);
       }
       else{
           v.push_back(p);
           v.push_back(y);
       }
       return v;
   }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution obj;
        vector<int> ans= obj.firstAndLast(arr, n, x) ;
        for(int i:ans){
            cout<<i<<" ";
        }
        cout<< endl;
    }
    return 0;
}
  // } Driver Code Ends