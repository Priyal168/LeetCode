// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int findKRotation(int arr[], int n) {
	    int ans=0;
	    int first = 0;
	    int last = n-1;
	    while(first<=last){
	        int mid = first + (last-first)/2;
	        int next = (mid+1)%n;
	        int prev = (mid+n-1)%n;
    	        if(arr[mid]<=arr[prev])
                    return mid;
                if(arr[mid+1]<arr[mid])
                    return mid+1;
                if(arr[first]<=arr[mid])
                    first=mid+1;
                if(arr[mid]<=arr[last])
                    last=mid-1;
	   }
	        return ans;
	}

};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findKRotation(a, n);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends