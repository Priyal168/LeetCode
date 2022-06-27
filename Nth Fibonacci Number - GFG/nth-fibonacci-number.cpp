// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  
    long long int nthFibonacci(long long int n){
       int m = 1000000007;
       long long int ans, arr[n+1];
       arr[0] = 0; arr[1] = 1;
       for(int i=2; i<=n; i++) {
           arr[i] = (arr[i-2] + arr[i-1])%m;
       }
       return arr[n];
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}
  // } Driver Code Ends