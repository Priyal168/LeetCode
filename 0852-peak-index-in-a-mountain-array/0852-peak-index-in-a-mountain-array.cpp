class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int mid = n/2;
        while(mid>0)
        if(arr[mid-1] < arr[mid] && arr[mid+1] < arr[mid]){
            return mid;
        } else{
            if(arr[mid+1] > arr[mid]){
                mid++;
            } else{
                mid--;
            }
        }
        return mid;
    }
};