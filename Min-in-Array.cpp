//this problem may include rotated sorted array ,where we have to find minimum in it ,
//can be done using binary search as folows;
class Solution {
public:
    int findMin(vector<int>& arr) {
        int n = arr.size();
        int low = 0, high=n-1;
        int ans = INT_MAX;
        while(low <= high){
            int mid= (low+high)/2;

            if(arr[low]<=arr[high]){
                ans = min(ans,arr[low]);
                break;
            }

            else if(arr[low]<=arr[mid]){
                ans=min(ans,arr[low]);
                low = mid+1;
            }

            else{
                ans=min(ans,arr[mid]);
                high=mid-1;
            }
        }
        return ans;
    }
};